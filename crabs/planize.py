import struct,os,textwrap,subprocess,sys,shutil
from PIL import Image

def group_in_threes(seq):
	seqiter=iter(seq)
	while True:
		r=next(seqiter)
		g=next(seqiter)
		b=next(seqiter)
		yield (r,g,b)
TEMPFILE='temp.dat'

FILES=[
	('crab_plane{}','crab_pride_flag','crabgay256.png'),
	('transcrab_plane{}','trans_crab_flag','crabtran256.png'),
	('autistic_plane{}','autistic_pride_flag','autistic_pride_flag_256.png'),
]
with open(os.path.join('..','crabs.cpp'),'w') as outcrabs:
	print >>outcrabs,"""
#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"

// This file is generated by crabs\\planize.py.
"""
	with open(os.path.join('..','crabs.h'),'w') as crabs_header:
		for variable_name, flag_var, png_file in FILES:
			im=Image.open(png_file)
			im.load()
			color_bytes=struct.unpack('<48B',im.palette.tobytes())
			colors=list(enumerate(group_in_threes(color_bytes)))

			colors.sort(key=lambda (i,rgb):rgb[0]+rgb[1]+rgb[2])
			COLORMAP={}
			for i,(oi,_) in enumerate(colors):
				COLORMAP[oi]=i
			w,h=im.size
			buffers=[[],[],[],[]]
			bits=[1<<i for i in range(8)][::-1]
			for y in range(h):
				for x in range(w):
					v=im.getpixel((x,y))
					v=COLORMAP[v]
					for o in range(4):
						buffers[o].append(1 if v&(1<<o) else 0)
			outbuffers=[]
			for buffer in buffers:
				cbuffer=[]
				for i in range(0,len(buffer),8):
					x=buffer[i:i+8]
					v=sum([a*b for (a,b) in zip(x,bits)])
					#print v ,x
					cbuffer.append(chr(v))
				outbuffers.append(cbuffer)
			for i,buffer in enumerate(outbuffers):
				proc=subprocess.Popen(
					['lz4', '-c2s', 'stdin', TEMPFILE],
					stdin=subprocess.PIPE,
					stdout=subprocess.PIPE,
					stderr=subprocess.STDOUT
				)
				stdout,_=proc.communicate(''.join(buffer))
				if proc.returncode!=0:
					print 'Failed to compress {}'.format(outfile)
					sys.exit()
				with open(TEMPFILE,'rb') as f:
					inbytes=f.read()
				shutil.copyfile(TEMPFILE,'{}.lz4'.format(variable_name.format(i)))
				lines=textwrap.wrap(', '.join(['0x{:02x}'.format(ord(x)) for x in inbytes]))

				local_var = variable_name.format(i)
				print >>outcrabs,'static unsigned char far {}[] = {{'.format(local_var)
				for line in lines:
					print >>outcrabs, '\t{}'.format(line)
				print >>outcrabs,'};\n'

			print >>crabs_header,'extern Flag {};'.format(flag_var)

			print >>outcrabs,'GraphicsCommand {}_commands[]={{'.format(flag_var)
			for i,color in enumerate(colors):
				print >>outcrabs,'\tGraphicsCommand(Palette, {0: 2d}, RGB({1[1][0]: 3d},{1[1][1]: 3d},{1[1][2]: 3d})),'.format(i,color)
			for i in range(len(outbuffers)):
				print >>outcrabs,'\tGraphicsCommand(VGAPlane, {}, {}),'.format(variable_name.format(i),i)
			print >>outcrabs,'\tGraphicsCommand(EndCommandList)'
			print >>outcrabs,'};'

		print >>outcrabs, """
Flag crab_pride_flag = Flag(
	"crab-pride",
	"The Cool Crab Pride Flag",
	"Created by Foone Turing in 2022, based on the Cool Crab from Print Shop Deluxe",
	"crab|crabs|gay-crabs",
	crab_pride_flag_commands
);

Flag trans_crab_flag = Flag(
	"trans-crab",
	"The Cool Crab Trans Flag",
	"Created by Foone Turing in 2022, based on the Cool Crab from Print Shop Deluxe",
	"transcrab",
	trans_crab_flag_commands
);

Flag autistic_pride_flag = Flag(
	"autistic",
	"The Autistic Pride Flag",
	"Created by Autistic Empire, under a Creative Commons Attribution-ShareAlike 4.0 International License: https://www.autisticempire.com/autistic-pride/",
	"autism|autism-pride|autistic-pride",
	autistic_pride_flag_commands,
	RGB(248,243,234), // We need to not overwrite a color with white (the default text color)
	4,
	LAYOUT_CENTER
);
"""

if os.path.exists(TEMPFILE):
	os.unlink(TEMPFILE)

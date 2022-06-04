from PIL import Image
im=Image.open('crabtran256.png')
w,h=im.size
buffers=[[],[],[],[]]
bits=[1<<i for i in range(8)][::-1]
for y in range(h):
	for x in range(w):
		v=im.getpixel((x,y))
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
	with open('trans{}.dat'.format(i),'wb') as f:
			f.write(''.join(buffer))



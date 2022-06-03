#!/usr/bin/python
import pygame
from pygame.constants import *
import pygame.gfxdraw
SCALE=2
METASCALE=5
import sys

def drawLineStrip(screen, points, color):
	for i in range(len(points)-1):
		x,y=points[i]
		nx,ny=points[i+1]
		pygame.gfxdraw.line(screen,x,y,nx,ny,color)

MODES=['polygon','lines']
MODE_RENDER={
	'polygon':pygame.gfxdraw.filled_polygon,
	'lines':drawLineStrip
}
MINIMUM_POINTS={
	'polygon':3,
	'lines':2
}
def draw():
	screen.blit(bg, (0,0))
	draw_cmd = MODE_RENDER[mode]
	for poly in polys:
		draw_cmd(screen,poly,(150,0,77))
	if len(cpoly)>=MINIMUM_POINTS[mode]:
		draw_cmd(screen,cpoly,(255,120,120))
	for (x,y) in cpoly:
		pygame.gfxdraw.filled_circle(screen,x,y,2,(255,0,0))
	pygame.display.flip()
def update():
	pass
def setMode(new_mode):
	global mode
	mode=new_mode
	pygame.display.set_caption('Polygon Maker: {}'.format(mode))
def init():
	global screen,screen_size,bg,polys,cpoly,selected,mode
	pygame.init()
	bg_image = pygame.image.load('bg.png')
	bw,bh=bg_image.get_size()
	screen_size=(bw*SCALE,bh*SCALE)
	setMode('polygon')
	
	flags=0
	if '-f' in sys.argv or '--fullscreen' in sys.argv:
		flags|=FULLSCREEN
	screen=pygame.display.set_mode(screen_size,flags)
	global bg
	bg=pygame.transform.scale(bg_image,screen_size).convert()
	
	polys=[]
	cpoly=[]
def getNearestPointAllPolygons(pos):
	mx,my=pos
	out=[]
	for poly in polys+[cpoly]:

		for (x,y) in poly:
			d2=(x-mx)**2 + (y-my)**2
			out.append((d2,(x,y)))
	out.sort()
	if not out:
		return None,None
	return out[0]

def getNearestPoint(pos):
	mx,my=pos
	out=[]
	for i,(x,y) in enumerate(cpoly):
		d2=(x-mx)**2 + (y-my)**2
		out.append((d2,i))
	out.sort()
	if not out:
		return None,None
	return out[0]
def main():
	global running,cpoly,selected
	init()
	running=True
	nearest=None
	while running:
		update()
		draw()
		for event in pygame.event.get():
			if event.type==QUIT:
				running=False
			elif event.type==KEYUP:
				if event.key==K_ESCAPE:
					running=False
				elif event.key==K_SPACE:
					polys.append(cpoly)
					cpoly=[]
				elif event.key==K_F2:
					if cpoly:
						polys.append(cpoly)
					cpoly=[]
					for i,poly in enumerate(polys):
						sout=[r'int polygon_{}[]={{'.format(i)]
						middle_bits=[]
						for point in poly:
							x,y=point
							outx=int(x//SCALE//METASCALE)
							outy=int(y//SCALE//METASCALE)
							middle_bits.append('{},{}'.format(outx,outy))
						middle_bits.append('-1,-1')

						sout.append(','.join(middle_bits))
						sout.append('};')

						print ''.join(sout)
				elif event.key==K_TAB:
					try:
						new_mode = MODES[MODES.index(mode)+1]
					except IndexError:
						new_mode = MODES[0]
					setMode(new_mode)

					
			elif event.type==MOUSEBUTTONDOWN:
				if event.button==1:
					if pygame.key.get_mods() & KMOD_SHIFT:
						dist,npos=getNearestPointAllPolygons(event.pos)
						if dist<25**2:
							cpoly.append(list(npos))
					else:
						cpoly.append(list(event.pos))
				elif event.button==2:
					_,nearest=getNearestPoint(event.pos)
				elif event.button==3:
					cpoly=cpoly[:-1]
			elif event.type==MOUSEBUTTONUP:
				if event.button==2:
					nearest=None
			elif event.type==MOUSEMOTION:
				if nearest is not None:
					try:
						cpoly[nearest][0]+=event.rel[0]
						cpoly[nearest][1]+=event.rel[1]
					except IndexError:
						pass
if __name__=='__main__':
	main()

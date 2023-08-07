import re, os, glob, pdb

def extract_flags():
	prideflags=[]
	for filepath in glob.glob(os.path.join('..','flags','*.cpp')):
		with open(filepath,'r') as f:
			data=f.read()
			seenfile=False
			for identifier,name in re.findall(r'^(?:static )?Flag ([a-z0-9_]+) = Flag\(\n\s*\"([^"]+)\"',data,re.DOTALL|re.MULTILINE):
				if not seenfile:
					seenfile=True
				
				prideflags.append((name,identifier))
	prideflags.sort()
	return prideflags

if __name__ == '__main__':
	for name,identifier in extract_flags():
		print('* Name: {}\n  C++ identifier is {}'.format(name,identifier))
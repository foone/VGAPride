import re, os, glob, pdb

def extract_flags():
	prideflags=[]
	used_files = set() # We want to skip any file with no flags in it. Why would that happen? I have no idea!
	for filepath in glob.glob(os.path.join('..','flags','*.cpp')):
		with open(filepath,'r') as f:
			data=f.read()
			seenfile=False
			for identifier,name in re.findall(r'^(?:static )?Flag ([a-z0-9_]+) = Flag\(\n\s*\"([^"]+)\"',data,re.DOTALL|re.MULTILINE):
				if not seenfile:
					seenfile=True
				
				prideflags.append((name,identifier))
				used_files.add(os.path.basename(filepath))
	prideflags.sort()
	used_files = sorted(list(used_files))
	return prideflags,used_files

if __name__ == '__main__':
	for name,identifier in extract_flags():
		print('* Name: {}\n  C++ identifier is {}'.format(name,identifier))
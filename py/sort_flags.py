import re
with open('..\\flagdefs.cpp','r') as f:
	data=f.read()
#\n\s*\"([^"]+)\"
out=[]
for identifier,name in re.findall(r'^static Flag ([a-z0-9_]+) = Flag\(\n\s*\"([^"]+)\"',data,re.DOTALL|re.MULTILINE):
	out.append((name,identifier))

out.sort()

print 'class Flag far *PRIDE_FLAGS[]={'
for name,identifier in out:
	print '\t&{},'.format(identifier)
print '\tNULL\n};\n'
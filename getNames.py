bad_words = ["monitoring","metadata", "elperevt", "electrons"]

def bwe(name):
	for bw in bad_words:
		if bw in name:
			return True
	return False

def getNames(file_name):
	f = open(file_name)
	names = list()
	for line in f:
		name = line.split('->')[-1].strip()
		if not bwe(name):
			names.append('\n\"' + name + '\"')
	f.close()
	o = open("good_names.txt", 'w')
	o.write("{" + ', '.join(names) + "}")
	o.close()

getNames("names.txt")
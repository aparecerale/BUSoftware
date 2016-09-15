
#------------------------------------------------------------
# AUTHOR Alejandro Aparicio aaparici@bu.edu
# 4 Part A: Earth as supercomputer
# Suppose that the Earth is actually a giant supercomputer, and 
# each electron represents a bit of storage (see [Hitchhikers 
# Guide to the Galaxy]) Estimate how many electrons are on the 
# earth, and convert this number to an equivalent number of 
# terabytes (TB).
#------------------------------------------------------------

def atomfunc(element, atomic, protons):
	earth_mass = 5.97*(10**24)
	Avo = 6.022136736*(10**23)
	atoms = Avo * (element*earth_mass/atomic)
	electrons = atoms * protons
	return electrons

def main():
	Fe = .321
	FeAt = 15.99940
	FeProt = 26

	Ox = .301
	OxAt = 55.845
	OxProt = 8.0
	
	Si = .151
	SiAt = 28.085
	SiProt = 14.0
	
	Mg = .139
	MgAt = 24.306
	MgProt = 12.0
	
	Su = .029
	SuAt = 32.068
	SuProt = 16
	
	Ni = .018
	NiAt = 58.6934
	NiProt = 28
	
	Ca = .015
	CaAt = 40.078
	CaProt = 20

	Al = .014
	AlAt = 26.9815385
	AlProt = 13
	
	Others = .012
	Avo = 6.022136736*pow(10,23)
	
	totElec = 0
	elements = [Fe,Ox,Si,Mg,Su,Ni,Ca,Al]
	atomicNum = [FeAt,OxAt,SiAt,MgAt,SuAt,NiAt,CaAt,AlAt]
	protons = [FeProt,OxProt,SiProt,MgProt,SuProt,NiProt,CaProt,AlProt]

	i = 0
	while  i < 8:
		electrons = atomfunc(elements[i],atomicNum[i],protons[i])
		totElec = totElec + electrons
		i = i + 1

	lowerLim = totElec - (totElec * 0.12)
	upperLim = totElec + (totElec * 0.12)

	print(lowerLim)
	print (totElec)
	print (upperLim)

main()


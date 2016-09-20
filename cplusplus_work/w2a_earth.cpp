
//------------------------------------------------------------
// AUTHOR Alejandro Aparicio aaparici@bu.edu
// 4 Part A: Earth as supercomputer
// Suppose that the Earth is actually a giant supercomputer, and 
// each electron represents a bit of storage (see [Hitchhikers 
// Guide to the Galaxy]) Estimate how many electrons are on the 
// earth, and convert this number to an equivalent number of 
// terabytes (TB).
//------------------------------------------------------------



#include <iostream>
#include <math.h>
using namespace std;


// Avogadro's number: 6.022136736*10**23
// atoms =// Av*(mass of element/Atomic Weight)
// every atom has the same number of protons and electrons
// https://en.wikipedia.org/wiki/Earth
// Earth's mass is approximately 5.97×10^24 kg (5,970 Yg).
// Iron (32.1%),
// Oxygen (30.1%),
// Silicon (15.1%),
// Magnesium (13.9%),
// Sulfur (2.9%),
// Nickel (1.8%),
// Calcium (1.5%),
// Aluminium (1.4%),
// Other 1.2% 
// Due to mass segregation, the core region is estimated to be primarily composed of iron (88.8%), 
// with smaller amounts of nickel (5.8%), sulfur (4.5%), and less than 1% trace elements


double atomfunc(double element, double atomic, double protons)
{
	double earth_mass = 5.97*pow(10,24);
	double Avo = 6.022136736*pow(10,23);
	double electrons;
	double atoms;

	atoms = Avo * (element*earth_mass/atomic);
	electrons = atoms * protons;
	return electrons;

}



int main()
{
	const double Fe = .321;
	const double FeAt = 15.99940;
	const double FeProt = 26;

	const double Ox = .301;
	const double OxAt = 55.845;
	const double OxProt = 8.0;
	
	const double Si = .151;
	const double SiAt = 28.085;
	const double SiProt = 14.0;
	
	const double Mg = .139;
	const double MgAt = 24.306;
	const double MgProt = 12.0;
	
	const double Su = .029;
	const double SuAt = 32.068;
	const double SuProt = 16;
	
	const double Ni = .018;
	const double NiAt = 58.6934;
	const double NiProt = 28;
	
	const double Ca = .015;
	const double CaAt = 40.078;
	const double CaProt = 20;

	const double Al = .014;
	const double AlAt = 26.9815385;
	const double AlProt = 13;
	
	const double Others = .012;
	const double Avo = 6.022136736*pow(10,23);
	
	int i;
	double electrons;
	double totElec = 0;
	double terabytes;
	double elements[8] = {Fe,Ox,Si,Mg,Su,Ni,Ca,Al};
	double atomicNum[8] = {FeAt,OxAt,SiAt,MgAt,SuAt,NiAt,CaAt,AlAt};
	double protons[8] = {FeProt,OxProt,SiProt,MgProt,SuProt,NiProt,CaProt,AlProt};

	for (i = 0; i < 8; i++)
	{
		electrons = atomfunc(elements[i],atomicNum[i],protons[i]);
		totElec = totElec + electrons;
	}

	terabytes = (totElec/8)/(pow(10,12));

	double lowerLim = terabytes - (terabytes * 0.25);
	double upperLim = terabytes + (terabytes * 0.25);

	// don't forget to divide by 8 since every electron is a bit not a bytes
	// and represent it in terabytes

	cout << lowerLim << endl;

	cout << terabytes << endl;

	cout << upperLim << endl;

	return 0;
}
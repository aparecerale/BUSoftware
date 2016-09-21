

#include <iostream>  // REMOVE THIS LIBRARY BEFORE SUBMITTING
#include <iomanip>   // REMOVE THIS LIBRARY BEFORE SUBMITTING
#include <vector> // vectors are indexable and variable size.

using namespace std;
typedef vector<double> Poly;

int disp(Poly a1)
{
	int csize,i;
	csize = a1.size();
	for (i=0; i < csize; i++ )
	{
		cout << a1[i] << endl;
	}
	return 0;
}

Poly add_poly(const Poly &a,const Poly &b)
{
	
	int i, j;
	int asize, bsize, rsize;
	double res_add;
	vector<double> result;
	vector<double> newa;
	vector<double> newb;

	newa = a;
	newb = b;
	asize = newa.size();
	bsize = newb.size();
	
	if (a.size() > newb.size())
	{
		for( i = 0; i < asize; i++ )
		{
			for (j=bsize; j < asize; j++)
			{
				newb.push_back(0.0);

			}
			res_add = newa[i] + newb[i];
			result.push_back(res_add);
		}
	}
	else
	{
		for( i = 0; i < bsize; i++ )
		{
			for (j=asize; j < bsize; j++)
			{
				newa.push_back(0.0);

			}
			res_add = newa[i]+newb[i];
			result.push_back(res_add);
		}
	}
	rsize = result.size();

	return result;
}

// Multiply two polynomials, returning the result.
Poly multiply_poly(const Poly &a,const Poly &b)
{
	int i, j, asize, bsize, csize;
	vector<double> result;
	vector<double> mult_res;
	vector<double> mult_res2;
	double mult;

	
	asize = a.size();
	bsize = b.size();
	cout << "running multiply_poly" << endl;
	cout << "asize: " << asize << endl;
	cout << "bsize: " << bsize << endl;

	for (j=0; j < asize; j++)
	{
		mult_res.clear();
		for (i=0; i<bsize; i++)
		{
			mult = a[j]*b[i];
			mult_res.push_back(mult);
		}
		//------------------------------
		disp(mult_res);
		//-------------------------------
		if (j==0)
		{
			mult_res2 = mult_res;
			cout << "im in j==0" << endl;
			//------------------------------
			disp(mult_res2);
			//-------------------------------

		}
		else
		{
			cout << "im in j==0 else" << endl;
			i  = 0;
			cout << "j: " << j << endl;
			while (i<j)
			{
				mult_res.insert(mult_res.begin(),0);
				i++;
			}

			//------------------------------
			disp(mult_res2);
			cout << "mult_res" << endl;
			disp(mult_res);
			//-------------------------------
			mult_res2 = add_poly(mult_res2,mult_res);
			cout << "new mult_res2" << endl;
			disp(mult_res2);

		}
		
		csize = mult_res2.size();
		cout << "size: " << csize << endl;

	}
	
	for (i=0; i < csize; i++ )
	{
		cout << mult_res2[i] << endl;
	}
	return result;
}

int main()
{

	vector<double> result;
	vector<double> a{6,8,2};
	vector<double> b{2,5};
	int asize, bsize, rsize;
	int i;
	double res_add;

	//receive a vector of any size and transform

	result = multiply_poly(a,b);
//	result = add_poly(a,b);
	disp(result);



	return 0;
}

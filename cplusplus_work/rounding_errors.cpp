

//------------------------------------------------------------
// Example
// 3.2 Rounding Errors
// If floating-point numbers were perfect, the following 
// program would not print anything:
//------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
	double one_third,zeroish;

   one_third = 1.0/3;

   for (int i=1;i<100;i++)
   {
      zeroish = 1.0 - 3.0 * (i * one_third)/ i;
      if (zeroish != 0)
         cout << i << " " << zeroish << endl;
   }  
   
   return 0;
}
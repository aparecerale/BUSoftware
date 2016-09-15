
//------------------------------------------------------------
// AUTHOR Alejandro Aparicio aaparici@bu.edu
//Timing Code
// This is a simple example of using the clock() function of <ctime>
// to measure how long a code block took to run.
//------------------------------------------------------------

#include <iostream>
#include <ctime>
#include <math.h>
#include <climits>

using namespace std;

int main()
{
    double microseconds;
    double seconds;
    clock_t start_clock,end_clock;

    start_clock = clock();  // Timing starts here

    short unsigned int m = 1;
    while (m > 0)
    {
        m++;
        //cout << m << endl;
    }

    end_clock = clock();    // Timing stops here
    

    seconds = (double)(end_clock-start_clock) / CLOCKS_PER_SEC;
    microseconds = seconds*1000000;
    cout << "short unsigned int time (microseconds): " << microseconds << endl;
    

    //unsigned int
    //---------------------------------
    unsigned int n = 1;
    int n_b;
    start_clock = clock();  // Timing starts here

    while (n > 0)
    {
        n_b = n;
        n++;
        //cout << n << endl;
    }

    end_clock = clock();    // Timing stops here
    
    seconds = (double)(end_clock-start_clock) / CLOCKS_PER_SEC;
    cout << "unsigned int time (second): " << seconds << endl;


    //long unsigned
    // //---------------------------------
    float a = 18446744073709551615;
    //float a = 9.223372036854776e+18;
    float b = 4294967295;
    float c;
    float d;
    c = a/b;
    d = (c * seconds) / (3600 * 24 * 365.25);
    cout << "long unsigned int time (years): " << d << endl;

    

}

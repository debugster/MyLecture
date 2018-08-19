/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    
    cout.precision(6);
    cout << "      x\t\tsqrt(x)     x^2\n";

    for (x = 1.0; x <= 20.0; x++) {
        cout.width(7);
        cout << x << "\t\t";
        cout.width(7);
        cout << sqrt(x) << "\t";
        cout.width(7);
        cout << x * x << "\n";
    }

    return 0;
}
/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x;
    
    cout << setprecision(4);
    cout << "      x\tsqrt(x)     x^2\n";

    for (x = 1.0; x <= 20.0; x++) {
        cout << setw(7) << x << "\t";
        cout << setw(7) << sqrt(x) << "\t";
        cout << setw(7) << x * x << "\n";
    }

    return 0;
}
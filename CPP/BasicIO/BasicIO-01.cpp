/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

#include <iostream>

using namespace std;

int main()
{
    // display using default settings
    cout << 123.45 << " hello " << 100 << "\n";
    cout << 10 << " " << -10 << "\n";
    cout << 100.0 << "\n\n";

    // changing some formats
    cout.unsetf(ios::dec); // unsets dec flag, not required by all compilers
    cout.setf(ios::hex | ios::scientific); // sets hex and scientific flags
    cout << 123.45 << " hello " << 100 << "\n";

    cout.setf(ios::showpos); // sets showpos flag, it only affects the decimal output
    cout << 10 << " " << -10 << "\n";

    cout.setf(ios::showpoint, ios:: fixed); // sets showpoint and fixed flags
    cout << 100.0 << "\n\n";

    return 0;
}
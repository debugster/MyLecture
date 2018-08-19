/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

#include <iostream>

using namespace std;

int main()
{
    cout.width(10); // sets minimum field width 10
    cout << "Hello" << "\n"; // right justified by default

    cout.width(10); // sets minimum field width 10
    cout.fill('#'); // sets fill character as #
    cout << "Hello" << "\n"; // right justified by default

    cout.setf(ios::left);
    cout.width(10); // sets minimum field width 10
    cout << "Hello" << "\n"; // now left justified

    cout.width(10); // sets minimum field width 10
    cout.precision(10); // sets 10 digits precision
    cout << 123.1235567 << "\n";

    cout.width(10); // sets minimum field width 10
    cout.precision(6); // sets 6 digits precision
    cout << 123.1235567 << "\n";

    return 0;
}
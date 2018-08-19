/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

#include <iostream>

using namespace std;

int main()
{
    cout.unsetf(ios::dec);
    cout.setf(ios::uppercase | ios::showbase | ios:: hex);
    cout << 88 << "\n";

    cout.unsetf(ios::uppercase);
    cout << 88 << "\n";

    return 0;
}
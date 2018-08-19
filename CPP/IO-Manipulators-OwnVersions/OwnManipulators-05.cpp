/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

#include <iostream>

using namespace std;

ostream &setHex(ostream &output)
{
    output.unsetf(ios::dec);
    output.setf(ios::hex | ios::uppercase | ios:: showbase);

    return output;
}

ostream &resetHex(ostream &output)
{
    output.unsetf(ios::hex | ios::uppercase | ios:: showbase);
    output.setf(ios::dec);

    return output;
}

int main()
{
    cout << setHex << 1515 << endl;
    cout << 1234 << endl;
    cout << resetHex << 1515 << endl;
    cout << 1234 << endl;

    return 0;
}
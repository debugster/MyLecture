/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

#include <iostream>

using namespace std;

ostream &myManip(ostream &output)
{
    output.width(10);
    output.precision(4);
    output.fill('#');

    return output;
}

int main()
{
    cout << myManip << 123.456789 << endl;

    return 0;
}
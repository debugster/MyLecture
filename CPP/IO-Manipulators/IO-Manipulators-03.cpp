/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    bool b = true;

    cout << "Before setting boolalpha : ";
    cout << b << " " << !b << endl;

    cout << "After setting boolalpha : ";
    cout << boolalpha << b << " " << !b << endl;

    cout << "\nNow enter a boolean value (true or false) : ";
    cin >> boolalpha >> b;
    cout << "You\'ve entered " << b << endl;

    return 0;
}
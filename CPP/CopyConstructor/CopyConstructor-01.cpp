/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// Understanding Copy Constructor - 01
// Students, can you tell me the output of the following program? 

#include <iostream>

using namespace std;

int main()
{
    int a = 50;
    int b = a;

    cout << "Before the change\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl << endl;

    a = 100;

    cout << "After the change\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
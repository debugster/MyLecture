/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// Let's solve the problem encountered in previous problem
// This program now handles the input (5 0)

#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Enter two numbers : ";
    while (cin >> x >> y) {
        if (y == 0) {
            cout << "Error: Cannot divide by zero.\n";
        }
        else {
            cout << "x/y = " << x / y << endl;
        }
        cout << "Enter two numbers : ";
    }

    return 0;
}
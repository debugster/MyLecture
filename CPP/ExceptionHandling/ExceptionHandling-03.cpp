/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// This program solves the "Divide by zero" error using try...catch block

#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Enter two numbers : ";
    while (cin >> x >> y) {
        try {
            if (y == 0) {
                throw -1;
            }
            cout << "x/y = " << x / y << endl;
        }
        catch (int a) {
            if (a == -1) {
                cout << "Error: Cannot divide by zero.\n";
            }
        }

        cout << "Enter two numbers : ";
    }

    return 0;
}
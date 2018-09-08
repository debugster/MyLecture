/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// What the previous program does are
// - produces -1 for 5 0
// - also produces -1 for 5 -5
// But inside the main() (from the previous program)
// - the if statement on line 34 fails to distinguish between these -1's
// Q: What can we do now to distinguish between these -1's?
// A: Solution is given below

#include <iostream>
#include <string>

using namespace std;

string DivideByZeroError = "Error: Cannot divide by zero.";

int quotient(int x, int y)
{
    if (y == 0) {
        throw DivideByZeroError;
    }

    return (x / y);
}

int main()
{
    int x, y, z;

    cout << "Enter two numbers : ";
    while (cin >> x >> y) {
        try {
            z = quotient(x, y);
            cout << "x/y = " << z << endl;
        }
        catch (string str) {
            cout << str << endl;
        }

        cout << "Enter two numbers : ";
    }

    return 0;
}

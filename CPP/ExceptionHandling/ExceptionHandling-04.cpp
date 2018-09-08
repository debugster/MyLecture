/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// Now let's build a user defined function which
// - takes two int arguments (x, y)
// - calculates and returns int quotient of (x/y)
// Q: Is this program completely accurate?
// Q: What result does this program produce for (5 0)?
// Q: What result does this program produce for (5 -5)?
// Q: Are both of the results expected?

#include <iostream>

using namespace std;

int quotient(int x, int y)
{
    if (y == 0) {
        return -1;
    }

    return (x / y);
}

int main()
{
    int x, y, z;

    cout << "Enter two numbers : ";
    while (cin >> x >> y) {
        z = quotient(x, y);
        if (z == -1) {
            cout << "Error: Cannot divide by zero.\n";
        }
        else {
            cout << "x/y = " << z << endl;
        }

        cout << "Enter two numbers : ";
    }

    return 0;
}
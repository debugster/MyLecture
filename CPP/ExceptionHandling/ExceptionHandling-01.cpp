/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// This program:
// - Takes two numbers (x, y) from user
// - Calculates x/y
//  Q: What happens when we input 0 as y? For example, (5 0)

#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cout << "Enter two numbers : ";
    while (cin >> x >> y) {
        cout << "x/y = " << x / y << endl;
        cout << "Enter two numbers : ";
    }

    return 0;
}
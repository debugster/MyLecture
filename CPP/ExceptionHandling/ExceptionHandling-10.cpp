/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// In this program,
// We'll see,
// - How to rethrow an exception

#include <iostream>

using namespace std;

int main()
{
    try {
        cout << "Inside the outer try block\n";

        try {
            cout << "Inside the inner try block\n";
            throw -1;
        }
        catch (int e) {
            cout << "Inside the inner catch block : got " << e << endl;
            throw; // rethrows -1
        }

        cout << "This line won\'t be printed\n";
    }
    catch (int e) {
        cout << "Inside the outer catch block : got " << e << endl;
    }

    cout << "This line will be printed\n";

    return 0;
}
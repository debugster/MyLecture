/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// In this program, we'll see,
// - how to catch multiple type of exception from a single try block

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x;

    while (cin >> x) {
        try {
            if (x % 2 == 0) {
                throw -1;
            }
            else if (x % 3 == 0) {
                throw 2.5;
            }
            else if (x % 5 == 0) {
                throw 'a';
            }
            else if (x % 7 == 0) {
                throw true;
            }
            else {
                throw "exception";
            }
        }
        catch (int &) {
            cout << x << " is divisible by 2\n";
        }
        catch (double &) {
            cout << x << " is divisible by 3\n";
        }
        catch (char &) {
            cout << x << " is divisible by 5\n";
        }
        // bool and char[] are caught here
        catch (...) {
            cout << x << " is not divisible by 2, 3, 5\n";
        }
    }

    cout << "Out of the loop\n";

    return 0;
}
/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// minmax()
// Returns a pair with the smallest of a and b as first element, and the largest as second
// This function requires C++ 11

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    pair<int, int>ptr;
    ptr = minmax({10, 20 , 30, 40, 5});
    cout << "Min = " << ptr.first << endl;
    cout << "Max = " << ptr.second << endl;

    return 0;
}
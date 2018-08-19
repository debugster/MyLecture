/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// binary_search() example
/**
Returns true if any element in the range [first,last) is equivalent to value, and false otherwise.

Complexity : O(log(n))
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int myInt[] = {1, 2, 3, 4, 5, 4, 3, 2, 1, 6};

    sort(myInt, myInt + 10);
    vector<int>myVector(myInt, myInt + 10);

    if (binary_search(myVector.begin(), myVector.end(), 2)) {
        cout << "2 is found in myVector\n";
    }
    else {
        cout << "2 is not found in myVector\n";
    }

    if (binary_search(myInt, myInt + 10, 9)) {
        cout << "9 is found in myInt\n";
    }
    else {
        cout << "9 is not found in myInt\n";
    }

    return 0;
}

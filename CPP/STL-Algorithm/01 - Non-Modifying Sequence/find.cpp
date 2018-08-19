/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// find() example
/**
Returns an iterator to the first element in the range [first,last) that compares equal to val.
If no such element is found, the function returns last.

Complexity : O(n)
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    // using find() with array and pointer:
    int myInt[] = {10, 40, 30, 15};
    int *p;

    p = find(myInt, myInt + 4, 30); // searches for 30
    if (p != myInt + 4) {
        cout << "Element found in myInt : " << *p << endl;
    }
    else {
        cout << "Element not found in myInt\n";
    }

    // using find() with vector and iterator:
    vector<int>myVector(myInt, myInt + 4);
    vector<int>::iterator itr;

    itr = find(myVector.begin(), myVector.end(), 50); // searches for 50
    if (itr != myVector.end()) {
        cout << "Element found in myVector : " << *itr << endl;
    }
    else {
        cout << "Element not found in myVector\n";
    }

    return 0;
}


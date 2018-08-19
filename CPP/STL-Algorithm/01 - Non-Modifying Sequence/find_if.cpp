/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// find_if() example
/**
Returns an iterator to the first element in the range [first,last) for which pred returns true.
If no such element is found,the function returns last.

Complexity : O(n)
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isEven(int x)
{
    return !(x % 2);
}

bool isOdd(int x)
{
    return (x % 2);
}

bool isNeg(int x)
{
    return (x < 0);
}

int main()
{
    int myInt[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>myVector(myInt, myInt + 10);
    vector<int>::iterator itr;

    itr = find_if(myVector.begin(), myVector.end(), isEven);
    if (itr != myVector.end()) {
        cout << "1st even number found = " << *itr << endl;
    }
    else {
        cout << "No even number is found\n";
    }

    itr = find_if(myVector.begin(), myVector.end(), isOdd);
    if (itr != myVector.end()) {
        cout << "1st odd number found = " << *itr << endl;
    }
    else {
        cout << "No odd number is found\n";
    }

    itr = find_if(myVector.begin(), myVector.end(), isNeg);
    if (itr != myVector.end()) {
        cout << "1st negative number found = " << *itr << endl;
    }
    else {
        cout << "No negative number is found\n";
    }

    return 0;
}

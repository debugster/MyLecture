/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// search() example
/**
Searches the range [first1,last1) for the first occurrence of the sequence defined by [first2,last2),
and returns an iterator to its first element, or last1 if no occurrences are found.

Complexity : O(n^2)
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int myInt1[] = {1, 2, 3, 4, 5, 11, -2};
    int myInt2[] = {3, 4, 5};

    vector<int>myVector1(myInt1, myInt1 + 7);
    vector<int>myVector2(myInt2, myInt2 + 3);

    vector<int>::iterator itr;

    itr = search(myVector1.begin(), myVector1.end(), myVector2.begin(), myVector2.end());
    if (itr != myVector1.end()) {
        cout << "myVector2 is found in myVector1 at position " << (itr - myVector1.begin()) << endl;
    }
    else {
        cout << "myVector2 is not found in myVector1\n";
    }

    myVector2[2] = 10;

    itr = search(myVector1.begin(), myVector1.end(), myVector2.begin(), myVector2.end());
    if (itr != myVector1.end()) {
        cout << "myVector2 is found in myVector1 at position " << (itr - myVector1.begin()) << endl;
    }
    else {
        cout << "myVector2 is not found in myVector1\n";
    }

    return 0;
}


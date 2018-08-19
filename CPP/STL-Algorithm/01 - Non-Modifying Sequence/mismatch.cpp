/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// mismatch() example
/**
Compares the elements in the range [first1,last1) with those in the range beginning at first2,
and returns the first element of both sequences that does not match.

Complexity : O(n)
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

bool myFunction(int x, int y)
{
    return (x == y + 2);
}

int main()
{
    int myInt1[] = {1, 4, 3, 4, 4, 6, 7, 4, -1, 10};
    int myInt2[] = {1, 4, 3, 4, 8, 6, 7, 4, 9, 10};

    vector<int>myVector1(myInt1, myInt1 + 10);
    vector<int>myVector2(myInt2, myInt2 + 10);

    pair<vector<int>::iterator, vector<int>::iterator>myPair;

    // using default predicate
    myPair = mismatch(myVector1.begin(), myVector1.end(), myVector2.begin());
    cout << "First mismatched elements : " << *myPair.first << " & " << *myPair.second << endl;

    // using user defined predicate
    myPair = mismatch(myVector1.begin(), myVector1.end(), myVector2.begin(), myFunction);
    cout << "First mismatched elements : " << *myPair.first << " & " << *myPair.second << endl;

    return 0;
}

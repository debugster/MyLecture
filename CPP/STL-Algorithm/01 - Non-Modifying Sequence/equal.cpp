/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// equal() example
/**
Compares the elements in the range [first1,last1) with those in the range beginning at first2,
and returns the first element of both sequences that does not match.

Complexity : O(n)
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int myInt1[] = {1, 4, 3, 4, 8, 6, 7, 4, 9, 10};
    int myInt2[] = {1, 4, 3, 4, 8, 6, 7, 4, 9, 10};

    vector<int>myVector1(myInt1, myInt1 + 10);
    vector<int>myVector2(myInt2, myInt2 + 10);

    if (equal(myVector1.begin(), myVector1.end(), myVector2.begin())) {
        cout << "The contents of both vectors are equal\n";
    }
    else {
        cout << "The contents of both vectors differ\n";
    }

    myVector2[4] = 99;

    if (equal(myVector1.begin(), myVector1.end(), myVector2.begin())) {
        cout << "The contents of both vectors are equal\n";
    }
    else {
        cout << "The contents of both vectors differ\n";
    }

    return 0;
}


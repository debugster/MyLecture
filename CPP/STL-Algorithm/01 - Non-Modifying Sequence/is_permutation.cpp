/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// is_permutation() example
/**
Compares the elements in the range [first1,last1) with those in the range beginning at first2,
and returns true if all of the elements in both ranges match, even in a different order.

Complexity : O(n^2)
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int myInt1[] = {1, 2, 3, 4, 5};
    int myInt2[] = {1, 4, 2, 5, 3};

    vector<int>myVector1(myInt1, myInt1 + 5);
    vector<int>myVector2(myInt2, myInt2 + 5);

    if (is_permutation(myVector1.begin(), myVector1.end(), myVector2.begin())) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    myVector2[2] = 6;

    if (is_permutation(myVector1.begin(), myVector1.end(), myVector2.begin())) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }

    return 0;
}



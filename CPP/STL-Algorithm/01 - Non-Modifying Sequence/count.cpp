/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// count() example
/**
Returns the number of elements in the range [first,last) that compare equal to val.

Complexity : O(n)
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int myInt[] = {1, 4, 3, 4, 4, 6, 7, 4, 9, 10};
    vector<int>myVector(myInt, myInt + 10);
    vector<int>::iterator itr;

    int c = count(myVector.begin(), myVector.end(), 4);
    cout << "Number of 4\'s found = " << c << endl;

    c = count(myVector.begin(), myVector.end(), 11);
    cout << "Number of 11\'s found = " << c << endl;

    return 0;
}

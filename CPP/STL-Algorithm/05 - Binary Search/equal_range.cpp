/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// equal_range() example
/**
Returns the bounds of the subrange that includes all the elements of the range [first,last)
with values equivalent to val.

Complexity : O(log(n))
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int myInt[] = {10, 20, 30, 30, 20, 10, 10, 20, 40, 15};

    sort(myInt, myInt + 10);
    vector<int>myVector(myInt, myInt + 10);

    pair<vector<int>::iterator, vector<int>::iterator>ptr;

    cout << "After sort()\n";
    for (int i = 0; i < myVector.size(); i++) {
        cout << i << " : " << myVector[i] << endl;
    }

    ptr = equal_range(myVector.begin(), myVector.end(), 20);
    cout << "Range found at positions " << ptr.first - myVector.begin();
    cout << " and " << ptr.second - myVector.begin() << endl;

    return 0;
}




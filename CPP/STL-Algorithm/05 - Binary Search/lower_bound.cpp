/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// lower_bound() example
/**
Returns an iterator pointing to the first element in the range [first,last)
which is not less than a specified value.

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
    vector<int>::iterator Lower;

    cout << "After sort()\n";
    for (int i = 0; i < myVector.size(); i++) {
        cout << i << " : " << myVector[i] << endl;
    }

    Lower = lower_bound(myVector.begin(), myVector.end(), 30);
    cout << Lower - myVector.begin() << endl;

    return 0;
}


/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// sort() example
/**
Sorts the elements in the range [first,last) into ascending order.

Relative ordering is not preserved.

Complexity : O(nlog(n))
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    vector<int>myVector;

    for (int i = 0; i < 10; i++) {
        myVector.push_back(rand() % 100);
    }

    cout << "Before sort()\n";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }

    sort(myVector.begin(), myVector.end());

    cout << "\nAfter sort()\n";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }

    return 0;
}

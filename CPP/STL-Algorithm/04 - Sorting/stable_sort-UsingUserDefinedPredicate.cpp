/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// stable_sort() example
/**
Sorts the elements in the range [first,last) using user defined predicate.

Relative ordering is preserved.

Complexity : O(nlog(n))
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

bool descending1(int x, int y)
{
    return (x > y);
}

struct descending2
{
    bool operator()(int x, int y)
    {
        return (x > y);
    }
} descending3;

int main()
{
    srand(time(NULL));

    vector<int>myVector;

    for (int i = 0; i < 10; i++) {
        myVector.push_back(rand() % 100);
    }

    cout << "Before stable_sort()\n";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }

    stable_sort(myVector.begin(), myVector.end(), descending1);
    //stable_sort(myVector.begin(), myVector.end(), descending2());
    //stable_sort(myVector.begin(), myVector.end(), descending3);

    cout << "\nAfter stable_sort()\n";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }

    return 0;
}



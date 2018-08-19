/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// stable_partition() example
/**
Rearranges the elements in the range [first,last), in such a way that all the elements
for which predicate returns true precede all those for which it returns false.

The relative order of elements within each group is preserved.

Complexity : O(n)
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

bool isEven(int x)
{
    return !(x % 2);
}

int main()
{
    srand(time(NULL));

    vector<int>myVector;
    vector<int>::iterator itr, ptr;

    for (int i = 0; i < 10; i++) {
        myVector.push_back(rand() % 100);
    }

    cout << "Before stable_partition()\n";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }

    ptr = stable_partition(myVector.begin(), myVector.end(), isEven);

    cout << "\nAfter stable_partition()\nEven : ";
    for (itr = myVector.begin(); itr != ptr; itr++) {
        cout << *itr << " ";
    }
    cout << "\nOdd : ";
    for (itr = ptr; itr != myVector.end(); itr++) {
        cout << *itr << " ";
    }

    return 0;
}


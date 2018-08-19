/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// rotate() example
/**
Rotates the order of the elements in the range [first,last),
in such a way that the element pointed by middle becomes the new first element

Complexity : O(n)
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

    cout << "Before rotate()\n";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }

    rotate(myVector.begin(), myVector.begin() + 4, myVector.end());

    cout << "\nAfter rotate()\n";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }

    return 0;
}



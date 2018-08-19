/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// reverse_copy() example
/**
Copies the elements in the range [first,last) to the range beginning at result, but in reverse order.

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

    vector<int>myVectorOriginal, myVectorCopy;

    for (int i = 0; i < 10; i++) {
        myVectorOriginal.push_back(rand() % 100);
    }

    cout << "Before reverse()\nmyVectorOriginal : ";
    for (int i = 0; i < myVectorOriginal.size(); i++) {
        cout << myVectorOriginal[i] << " ";
    }

    myVectorCopy.resize(myVectorOriginal.size());
    reverse_copy(myVectorOriginal.begin(), myVectorOriginal.end(), myVectorCopy.begin());

    cout << "\nAfter reverse()\nmyVectorOriginal : ";
    for (int i = 0; i < myVectorOriginal.size(); i++) {
        cout << myVectorOriginal[i] << " ";
    }
    cout << "\nmyVectorCopy : ";
    for (int i = 0; i < myVectorCopy.size(); i++) {
        cout << myVectorCopy[i] << " ";
    }

    return 0;
}



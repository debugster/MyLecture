/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// partition_copy() example
/**
Copies the elements in the range [first,last) for which predicate returns true into the range pointed by result_true,
and those for which it does not into the range pointed by result_false.

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

    vector<int>myVector, odd, even;
    vector<int>::iterator itr;

    for (int i = 0; i < 10; i++) {
        myVector.push_back(rand() % 100);
    }

    //odd.resize(myVector.size());
    //even.resize(myVector.size());

    int n = count_if(myVector.begin(), myVector.end(), isEven);
    even.resize(n);
    odd.resize(myVector.size() - n);

    cout << "Before partition_copy()\n";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }

    partition_copy(myVector.begin(), myVector.end(), even.begin(), odd.begin(), isEven);

    cout << "\nAfter partition_copy()\nEven : ";
    for (itr = even.begin(); itr != even.end(); itr++) {
        cout << *itr << " ";
    }
    cout << "\nOdd : ";
    for (itr = odd.begin(); itr != odd.end(); itr++) {
        cout << *itr << " ";
    }

    return 0;
}



/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// minmax_element(first, last)
// Returns a pair with an iterator pointing to the element with the smallest value in the range [first,last)
// as first element, and the largest as second
// This function requires C++ 11

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    
    vector<int>myVector;

    for (int i = 1; i <= 10; i++) {
        myVector.push_back(rand() % 100);
    }

    cout << "myVector :\n";
    for (int i = 0; i < myVector.size(); i++) {
        cout << "[" << i << "] = " << myVector[i] << endl;
    }
    cout << endl;

    pair<vector<int>::iterator, vector<int>::iterator>ptr;
    ptr = minmax_element(myVector.begin(), myVector.end());
    cout << "Min = " << *ptr.first << ", at position " << ptr.first - myVector.begin() << endl;
    cout << "Max = " << *ptr.second << ", at position " << ptr.second - myVector.begin() << endl;

    return 0;
}
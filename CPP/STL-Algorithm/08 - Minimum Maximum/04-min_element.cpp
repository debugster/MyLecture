/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// min_element(first, last)
// Returns an iterator pointing to the element with the smallest value in the range [first,last)

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

    vector<int>::iterator itr;
    itr = min_element(myVector.begin(), myVector.end());
    cout << "Min = " << *itr << ", at position " << itr - myVector.begin() << endl;

    return 0;
}
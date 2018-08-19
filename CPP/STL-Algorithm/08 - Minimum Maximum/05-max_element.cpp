/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// max_element(first, last)
// Returns an iterator pointing to the element with the largest value in the range [first,last)

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    
    int myInt[10];

    for (int i = 0; i < 10; i++) {
        myInt[i] = rand() % 100;
    }

    cout << "myInt :\n";
    for (int i = 0; i < 10; i++) {
        cout << "[" << i << "] = " << myInt[i] << endl;
    }
    cout << endl;

    int *ptr;
    ptr = max_element(myInt, myInt + 10);
    cout << "Min = " << *ptr << ", at position " << ptr - myInt << endl;

    return 0;
}
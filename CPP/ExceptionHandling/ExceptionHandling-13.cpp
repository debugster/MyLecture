/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// In this program, we'll see,
// - demonstration of set_new_handler()

// new-handler function should perform one of the following tasks:
// 1. Make more memory available by deleting other dynamically allocated memory
//    (or telling the user to close other applications) and return to operator new to attempt
//    to allocate memory again.
// 2. Throw an exception of type bad_alloc
// 3. Call function abort() or exit() (both found in header <cstdlib>) to terminate the program

#include <iostream>
#include <new> // bad_alloc class is defined here
#include <cstdlib> // abort() is defined here

using namespace std;

void customNewHandler()
{
    cerr << "customNewHandler() is called" << endl;
    abort();
}

int main()
{
    int *data[50];
   
    // specify that customNewHandler() should be called on
    // memory allocation failure
    set_new_handler(customNewHandler);
   
    for (int i = 0; i <= 50; i++) {
        data[i] = new int[50000000]; // might throw bad_alloc exception
        cout << "data[" << i << "] is allocated with 50000000 ints\n";
    }

    cout << "Back in main()" << endl; // not printed

    return 0;
}
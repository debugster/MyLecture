/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// In this program, we'll see,
// - demonstration of standard new throwing bad_alloc when memory cannot be allocated

#include <iostream>
#include <new> // bad_alloc class is defined here

using namespace std;

int main()
{
    int *data[50];
   
    try 
    {
        for (int i = 0; i <= 50; i++) {
            data[i] = new int[50000000]; // might throw bad_alloc exception
            cout << "data[" << i << "] is allocated with 50000000 ints\n";
        }
    }
    catch (bad_alloc &e) // handle runtime_error thrwon by student()
    {
        cout << "Exception occurred: " << e.what() << endl;
    }

    return 0;
}
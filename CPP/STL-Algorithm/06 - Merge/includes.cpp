/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// includes() example
/**
Returns true if the sorted range [first1,last1) contains
all the elements in the sorted range [first2,last2).

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
    
    vector<int>List1 = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    vector<int>List2 = {40, 30, 20, 10};
    vector<int>List3 = {40, 30, 99, 10};

    sort(List1.begin(), List1.end());
    sort(List2.begin(), List2.end());
    sort(List3.begin(), List3.end());

    if (includes(List1.begin(), List1.end(), List2.begin(), List2.end())) {
        cout << "List1 contains List2\n";
    }
    else {
        cout << "List1 does not contain List2\n";
    }

    if (includes(List1.begin(), List1.end(), List3.begin(), List3.end())) {
        cout << "List1 contains List3\n";
    }
    else {
        cout << "List1 does not contain List3\n";
    }

    return 0;
}
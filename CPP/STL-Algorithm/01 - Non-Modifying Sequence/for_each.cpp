/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// for_each() example
/**
Applies function fn to each of the elements in the range [first,last)

Complexity : O(n)
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void myFunction(int x)
{
    cout << x + 2 << " ";
}

int main()
{
    int myInts[] = {5, 20, 5, 30, 30, 20, 10, 10, 20, 21};
    vector<int>myVector(myInts, myInts + 10);

    for_each(myVector.begin(), myVector.end(), myFunction);

    return 0;
}

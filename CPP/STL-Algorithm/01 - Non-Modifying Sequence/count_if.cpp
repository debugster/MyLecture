/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// count_if() example
/**
Returns the number of elements in the range [first,last) for which predicate is true.

Complexity : O(n)
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isEven(int x)
{
    return !(x % 2);
}

bool isOdd(int x)
{
    return (x % 2);
}

bool isNeg(int x)
{
    return (x < 0);
}

int main()
{
    int myInt[] = {1, 4, 3, 4, 4, 6, 7, 4, 9, 10};
    vector<int>myVector(myInt, myInt + 10);
    vector<int>::iterator itr;

    int c = count_if(myVector.begin(), myVector.end(), isEven);
    cout << "Number of even numbers found = " << c << endl;

    c = count_if(myVector.begin(), myVector.end(), isOdd);
    cout << "Number of odd numbers found = " << c << endl;

    c = count_if(myVector.begin(), myVector.end(), isNeg);
    cout << "Number of negative numbers found = " << c << endl;

    return 0;
}


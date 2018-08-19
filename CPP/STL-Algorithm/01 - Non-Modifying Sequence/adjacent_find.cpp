/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// adjacent_find() example
/**
Searches the range [first,last) for the first occurrence of two consecutive elements that match,
and returns an iterator to the first of these two elements, or last if no such pair is found

Complexity : O(n)
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool myFunction(int x, int y)
{
    return x == y - 1;
}

int main()
{
    int myInts[] = {5, 20, 5, 30, 30, 20, 10, 10, 20, 21};
    vector<int>myVector(myInts, myInts + 10);
    vector<int>::iterator itr;

    // using default comparison:
    itr = adjacent_find(myVector.begin(), myVector.end());

    if (itr != myVector.end()) {
        cout << "The first pair of repeated elements are: " << *itr << endl;
    }

    //using predicate comparison:
    itr = adjacent_find(++itr, myVector.end(), myFunction);

    if (itr != myVector.end()) {
        std::cout << "The second pair of repeated elements are: " << *itr << endl;
    }

    return 0;
}

/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// set_difference() example
/**
Constructs a sorted range beginning in the location pointed by result with the set difference
of the sorted range [first1,last1) with respect to the sorted range [first2,last2).

Complexity : O(n)
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>OddAndEven = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>Even = {2, 4, 6, 8, 10};
    vector<int>Odd(OddAndEven.size() + Even.size());
    vector<int>::iterator itr;

    // original lists should be kept sorted
    //sort(OddAndEven.begin(), OddAndEven.end());
    //sort(Even.begin(), Even.end());

    itr = set_difference(OddAndEven.begin(), OddAndEven.end(), Even.begin(), Even.end(), Odd.begin());
    Odd.resize(itr - Odd.begin());

    cout << "Odd has " << Odd.size() << " elements.\nOdd = ";
    for (int i = 0; i < Odd.size(); i++) {
        cout << Odd[i] << " ";
    }
    cout << endl;

    return 0;
}
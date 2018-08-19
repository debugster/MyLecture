/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// set_symmetric_difference() example
/**
Constructs a sorted range beginning in the location pointed by result with the
set symmetric difference of the two sorted ranges [first1,last1) and [first2,last2).

Complexity : O(n)
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>odd = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    vector<int>prime = {2, 3, 5, 7, 11, 13, 17, 19};
    vector<int>unCommon(odd.size() + prime.size());
    vector<int>::iterator itr;

    // original lists should be kept sorted
    //sort(odd.begin(), odd.end());
    //sort(prime.begin(), prime.end());

    itr = set_symmetric_difference(odd.begin(), odd.end(), prime.begin(), prime.end(), unCommon.begin());
    unCommon.resize(itr - unCommon.begin());

    cout << "unCommon has " << unCommon.size() << " elements.\nodd ^ prime = ";
    for (int i = 0; i < unCommon.size(); i++) {
        cout << unCommon[i] << " ";
    }
    cout << endl;

    return 0;
}
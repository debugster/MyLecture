/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// set_union() example
/**
Constructs a sorted range beginning in the location pointed by result
with the set union of the two sorted ranges [first1,last1) and [first2,last2).

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
    vector<int>OddOrPrime(odd.size() + prime.size());
    vector<int>::iterator itr;

    // original lists should be kept sorted
    //sort(odd.begin(), odd.end());
    //sort(prime.begin(), prime.end());
    
    itr = set_union(odd.begin(), odd.end(), prime.begin(), prime.end(), OddOrPrime.begin());
    OddOrPrime.resize(itr - OddOrPrime.begin());

    cout << "OddOrPrime has " << OddOrPrime.size() << " elements.\nodd U prime = ";
    for (int i = 0; i < OddOrPrime.size(); i++) {
        cout << OddOrPrime[i] << " ";
    }
    cout << endl;

    return 0;
}
/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// merge() example
/**
Combines the elements in the sorted ranges [first1,last1) and [first2,last2),
into a new range beginning at result with all its elements sorted.

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
    
    vector<int>List1, List2, mergedList;

    for (int i = 0; i < 5; i++) {
        List1.push_back(rand() % 100);
        List2.push_back(rand() % 100);
    }

    cout << "Before sort() and merge()\nList1 : ";
    for (int i = 0; i < List1.size(); i++) {
        cout << List1[i] << " ";
    }
    cout << "\nList2 : ";
    for (int i = 0; i < List2.size(); i++) {
        cout << List2[i] << " ";
    }

    sort(List1.begin(), List1.end());
    sort(List2.begin(), List2.end());

    mergedList.resize(List1.size() + List2.size());

    merge(List1.begin(), List1.end(), List2.begin(), List2.end(), mergedList.begin());

    cout << "\nAfter sort() and merge()\nmergedList : ";
    for (int i = 0; i < mergedList.size(); i++ ) {
        cout << mergedList[i] << " ";
    }

    return 0;
}
/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// lexicographical_compare()
// Returns true if the range [first1,last1) compares lexicographically less than the range [first2,last2)

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    
    string s1 = "Cat";
    string s2 = "Dog";
    
    cout << "Between " << s1 << " and " << s2 << ", ";
    if (lexicographical_compare(s1.begin(), s1.end(), s2.begin(), s2.end())) {
        cout << s1 << " is smaller.\n";
    }
    else {
        cout << s2 << " is smaller.\n";
    }

    s1 = "Cat";
    s2 = "Calm";
    
    cout << "Between " << s1 << " and " << s2 << ", ";
    if (lexicographical_compare(s1.begin(), s1.end(), s2.begin(), s2.end())) {
        cout << s1 << " is smaller.\n";
    }
    else {
        cout << s2 << " is smaller.\n";
    }

    s1 = "4567";
    s2 = "456666666";
    
    cout << "Between " << s1 << " and " << s2 << ", ";
    if (lexicographical_compare(s1.begin(), s1.end(), s2.begin(), s2.end())) {
        cout << s1 << " is smaller.\n";
    }
    else {
        cout << s2 << " is smaller.\n";
    }

    return 0;
}
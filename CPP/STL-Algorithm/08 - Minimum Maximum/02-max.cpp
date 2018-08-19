/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// max(a, b) - Returns the largest of a and b. If both are equivalent, a is returned.

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    cout << "max(10, 20) = " << max(10, 20) << endl;
    cout << "max(20.67, -10.52) = " << max(20.67, -10.52) << endl;
    cout << "max(\'P\', \'p\') = " << max('P', 'p') << endl;
    cout << "max(\"Minimum\", \"Maximum\") = " << max("Minimum", "Maximum") << endl;

    return 0;
}
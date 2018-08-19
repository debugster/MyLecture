/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// min(a, b) - Returns the smallest of a and b. If both are equivalent, a is returned.

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    cout << "min(10, 20) = " << min(10, 20) << endl;
    cout << "min(20.67, -10.52) = " << min(20.67, -10.52) << endl;
    cout << "min(\'P\', \'p\') = " << min('P', 'p') << endl;
    cout << "min(\"Minimum\", \"Maximum\") = " << min("Minimum", "Maximum") << endl;

    return 0;
}
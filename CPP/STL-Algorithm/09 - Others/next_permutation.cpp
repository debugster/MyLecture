/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// next_permutation()
// Returns true if the function could rearrange the object as a lexicographicaly greater permutation

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int numbers[] = {1, 2, 3, 4, 5};
    int count = 1, limit = 5;

    do {
        cout << count++ << " : ";
        for (int i = 0; i < limit; i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;
    } while (next_permutation(numbers, numbers + limit));

    return 0;
}
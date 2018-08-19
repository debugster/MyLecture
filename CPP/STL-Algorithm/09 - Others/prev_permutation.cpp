/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// prev_permutation()
// Returns true if the function could rearrange the object as a lexicographicaly smaller permutation

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int numbers[] = {5, 4, 3, 2, 1};
    int count = 1, limit = 5;

    do {
        cout << count++ << " : ";
        for (int i = 0; i < limit; i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;
    } while (prev_permutation(numbers, numbers + limit));

    return 0;
}
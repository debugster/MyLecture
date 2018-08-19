/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    
    vector<int>intV; // Initializes an empty vector

    for (int i = 1; i <= 5; i++) {
        intV.push_back(i * 2);
    }

    while (!intV.empty()) {
        for (int i = 0; i < intV.size(); i++) {
            cout << intV[i] << " ";
        }
        cout << endl;
        intV.pop_back(); // removes the last element
    }

    return 0;
}
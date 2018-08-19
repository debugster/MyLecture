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
    
    vector<int>intV; // Declares an empty vector

    for (int i = 0; i < 5; i++) {
        intV.push_back(rand() % 100);
    }

    for (int i = 0; i < intV.size(); i++) {
        cout << i + 1 << " : " << intV[i] << endl;
    }

    return 0;
}
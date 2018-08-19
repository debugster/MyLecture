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
    
    vector<int>intV(10, 2); // Initializes a 10-elements vector with 2

    for (int i = 0; i < intV.size(); i++) {
        cout << i + 1 << " : " << intV[i] << endl;
    }

    return 0;
}
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

    vector<int>intV(10); // Declares a 10-elements vector

    for (int i = 0; i < 10; i++) {
        intV[i] = rand() % 100;
    }

    for (int i = 0; i < intV.size(); i++) {
        cout << i + 1 << " : " << intV[i] << endl;
    }

    return 0;
}

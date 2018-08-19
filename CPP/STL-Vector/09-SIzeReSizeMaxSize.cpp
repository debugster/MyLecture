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
    
    vector<int>intV;

    cout << "Maximum Size : " << intV.max_size() << endl;
    
    for (int i = 1; i <= 5; i++) {
        intV.push_back(rand() % 100);
        cout << "Current Size : " << intV.size() << endl;
    }

    intV.resize(10, 99); // Resized to size 10, new elements (if any) are set to 99
    cout << "Current Size : " << intV.size() << endl;

    for (int i = 0; i < intV.size(); i++) {
        cout << i + 1 << " : " << intV[i] << endl;
    }

    intV.resize(3); // Resized to size 3

    for (int i = 0; i < intV.size(); i++) {
        cout << i + 1 << " : " << intV[i] << endl;
    }

    return 0;
}
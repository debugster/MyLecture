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
    
    vector<int>intV1;
    
    for (int i = 1; i <= 5; i++) {
        intV1.push_back(i * 2);
    }
    
    vector<int>intV2;

    for (int i = 1; i <= 5; i++) {
        intV2.push_back(rand() % 100);
    }
    cout << "Elements of intV2 before swap" << endl;
    for (int i = 0; i < intV2.size(); i++) {
        cout << intV2[i] << " ";
    }
    cout << endl;

    intV2.swap(intV1);
    cout << "Elements of intV2 after swap" << endl;
    for (int i = 0; i < intV2.size(); i++) {
        cout << intV2[i] << " ";
    }
    cout << endl;

    return 0;
}
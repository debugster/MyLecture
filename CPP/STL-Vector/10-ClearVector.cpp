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

    for (int i = 1; i <= 5; i++) {
        intV.push_back(i * 2);
        cout << "Current Size = " << intV.size() << endl;
    }

    cout << "intV : ";
    for (int i = 0; i < intV.size(); i++) {
        cout << intV[i] << " ";
    }

    intV.clear();
    cout << "\nAfter clear(), current size = " << intV.size() << endl;

    return 0;
}

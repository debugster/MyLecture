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
    
    vector<int>intV1; // Initializes an empty vector

    for (int i = 1; i <= 10; i++) {
        intV1.push_back(i * 2);
    }

    vector<int>::iterator iB, iE;
    iB = intV1.begin();
    iE = intV1.end();

    iB++;
    iE--;

    vector<int>intV2(iB, iE); // Initializes intV2 with iterators

    for (int i = 0; i < intV2.size(); i++) {
        cout << i + 1 << " : " << intV2[i] << endl;
    }

    return 0;
}
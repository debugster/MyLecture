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

    vector<int>::iterator iB, iE;
    iB = intV.begin();
    iE = intV.end();

    cout << "\nForward Access" << endl;
    while (iB != intV.end()) {
        cout << *iB << " ";
        iB++;
    }

    cout << "\nBackward" << endl;
    while (iE != intV.begin()) {
        iE--;
        cout << *iE << " ";
    }

    return 0;
}
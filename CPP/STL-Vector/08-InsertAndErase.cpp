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
    cout << "Original vector" << endl;
    for (int i = 0; i < intV.size(); i++) {
        cout << intV[i] << " ";
    }
    cout << endl;

    vector<int>::iterator itr;

    itr = intV.begin(); // Points ti the 1st element
    itr++; // Points to the 2nd element
    itr++; // Points to the 3rd element

    cout << *itr << endl;

    intV.erase(itr);

    cout << "After erasing 3rd element" << endl;
    for (int i = 0; i < intV.size(); i++) {
        cout << intV[i] << " "; 
    }
    cout << endl;

    intV.insert(itr, 100);

    cout << "After inserting 3rd element" << endl;
    for (int i = 0; i < intV.size(); i++) {
        cout << intV[i] << " "; 
    }
    cout << endl;

    intV.insert(itr, 5, -2);
    cout << "After inserting 5 -2s into 3rd place" << endl;
    for (int i = 0; i < intV.size(); i++) {
        cout << intV[i] << " "; 
    }
    cout << endl;

    itr = intV.begin() + 2; // itr points to the 3rd element
    intV.erase(itr, itr + 5);
    cout << "After erasing 5 elements" << endl;
    for (int i = 0; i < intV.size(); i++) {
        cout << intV[i] << " "; 
    }
    cout << endl;

    return 0;
}
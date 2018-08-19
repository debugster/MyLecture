/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// swap() example
/**
Exchanges the values of a and b

Complexity : O(n)
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int x = 30, y = 40;

    cout << "Before swap() : x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap() : x = " << x << ", y = " << y << endl;

    vector<int>myVector1(10, x), myVector2(5, y);

    cout << "Before swap()\nmyVector1 : ";
    for (int i = 0; i < myVector1.size(); i++) {
        cout << myVector1[i] << " ";
    }
    cout << "\nmyVector2 : ";
    for (int i = 0; i < myVector2.size(); i++) {
        cout << myVector2[i] << " ";
    }

    swap(myVector1, myVector2);

    cout << "\nAfter swap()\nmyVector1 : ";
    for (int i = 0; i < myVector1.size(); i++) {
        cout << myVector1[i] << " ";
    }
    cout << "\nmyVector2 : ";
    for (int i = 0; i < myVector2.size(); i++) {
        cout << myVector2[i] << " ";
    }

    return 0;
}

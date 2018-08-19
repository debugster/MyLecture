/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// Understanding Copy Constructor - 02
// Students, can you tell me the output of the following program? 

#include <iostream>

using namespace std;

class City
{
public:
    int area;

    City(int a)
    {
        area = a;
    }
};

int main()
{
    City Dhaka(50);
    City Ctg = Dhaka;

    cout << "Before the change\n";
    cout << "Dhaka.area = " << Dhaka.area << endl;
    cout << "Ctg.area = " << Ctg.area << endl << endl;

    Dhaka.area = 100;

    cout << "After the change\n";
    cout << "Dhaka.area = " << Dhaka.area << endl;
    cout << "Ctg.area = " << Ctg.area << endl << endl;

    return 0;
}
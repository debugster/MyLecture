/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// Understanding Copy Constructor - 03
// Students, can you tell me the output of the following program?
// Q1: Why does Ctg.population change after changing Dhaka.population?
// Q2: Why did not Ctg.area change after changing Dhaka.area in CopyConstructor-02.cpp?
// Q3: What can we do to prevent modification to Ctg.population?

#include <iostream>

using namespace std;

class City
{
public:
    int area;
    int *population;

    City(int a, int p)
    {
        area = a;
        population = new int(p);
    }
};

int main()
{
    City Dhaka(10, 20);
    City Ctg = Dhaka;

    cout << "Before the change\n";
    cout << "Dhaka.area = " << Dhaka.area << " Dhaka.population = " << *(Dhaka.population) << endl;
    cout << "Ctg.area = " << Ctg.area << " Ctg.population = " << *(Ctg.population) << endl << endl;

    *(Dhaka.population) = 100;

    cout << "After the change\n";
    cout << "Dhaka.area = " << Dhaka.area << " Dhaka.population = " << *(Dhaka.population) << endl;
    cout << "Ctg.area = " << Ctg.area << " Ctg.population = " << *(Ctg.population) << endl << endl;

    return 0;
}
/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// Understanding Copy Constructor - 04
// Solution to previuos problems

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

    City(const City &myCity)
    {
        area = myCity.area;
        population = new int(*(myCity.population));
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
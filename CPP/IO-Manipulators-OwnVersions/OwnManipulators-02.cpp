/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

#include <iostream>

using namespace std;

ostream &warn(ostream &output)
{
    output << "Warning\t: ";

    return output;
}

ostream &ps(ostream &output)
{
    output << "P.S.\t: ";

    return output;
}

int main()
{
    cout << warn << "Restricted area. Trespassing is limited." << endl;
    cout << ps << "Turn off your cell phone." << endl;

    return 0;
}
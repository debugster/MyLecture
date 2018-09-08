/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// In this program,
// We'll see a more convenient way to solve the problem encountered
// in ExceptionHandling\ExceptionHandling-05.cpp

#include <iostream>
#include <stdexcept> // contains runtime_error

using namespace std;

class DivideByZeroException : public runtime_error
{
 public:
	DivideByZeroException() : runtime_error("attempted to divide by zero")
    {
        // blank description
    }
};

int quotient(int x, int y)
{
    if (y == 0) {
        throw DivideByZeroException();
    }

    return (x / y);
}

int main()
{
    int x, y, z;

    cout << "Enter two numbers : ";
    while (cin >> x >> y) {
        try {
            z = quotient(x, y);
            cout << "x/y = " << z << endl;
        }
        catch (DivideByZeroException &e) {
            cout << "Exception : " << e.what() << endl;
        }

        cout << "Enter two numbers : ";
    }

    return 0;
}

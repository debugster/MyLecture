/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// We will take input the length and width by overloading (>>) operator
// and print the rectangle by overloading (<<) operator
// Q1: Why don't we use "cin" instead of "input" in line numbers 41, 43?
// Q2: Why don't we use "cout" instead of "output" in line numbers 53, 55, 60, 63, 66, 70, 72?
// A:  Answers can be found at FileIO/FileIO-10-LookBack.cpp

#include <iostream>

using namespace std;

class Rectangle
{
    int length;
    int width;

public:
    Rectangle()
    {
        length = 0;
        width = 0;
    }

    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    friend istream &operator>>(istream &input, Rectangle &r);
    friend ostream &operator<<(ostream &output, Rectangle r);
};

istream &operator>>(istream &input, Rectangle &r)
{
    cout << "Enter the length : ";
    input >> r.length;
    cout << "Enter the width : ";
    input >> r.width;

    return input;
}

ostream &operator<<(ostream &output, Rectangle r)
{
    int i, j;

    for (i = 1; i <= r.length; i++) {
        output << "# ";
    }
    output << endl;
    
    for (i = 2; i < r.width; i++) {
        for (j = 1; j <= r.length; j++) {
            if (j == 1 || j == r.length) {
                output << "# ";
            }
            else {
                output << "  ";
            }
        }
        output << endl;
    }

    for (i = 1; i <= r.length; i++) {
        output << "# ";
    }
    output << endl;

    return output;
}

int main()
{
    Rectangle r;

    for (int i = 1; i <= 3; i++) {
        cin >> r;
        cout << r << endl;
    }

    return 0;
}
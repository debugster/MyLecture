/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// We will print Rectangle

#include <iostream>

using namespace std;

class Rectangle
{
    int length;
    int width;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    friend ostream &operator<<(ostream &output, Rectangle r);
};

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
    Rectangle r1(10, 5), r2(20, 20), r3(10, 20);

    cout << r1 << endl << r2 << endl << r3 << endl;

    return 0;
}
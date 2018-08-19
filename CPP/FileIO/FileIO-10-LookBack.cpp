/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// Let's take a look back ;)
// from OperatorOverloading-Part-II/09-OverloadExtraction-MoreExample-02.cpp
// We'll take input the sides of rectangles from file-10-in.txt file
// and print the rectangles into file-10-out.txt file
// TODO: At first, create file-10-in.txt file and put sides of rectangles as required

#include <iostream>
#include <fstream>

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
    ifstream fin("file-10-in.txt");
    ofstream fout("file-10-out.txt");

    if (!fin) {
        cout << "Input file open error.\n";
        return 1;
    }
    if (!fout) {
        cout << "Output file open error.\n";
        return 1;
    }

    for (int i = 1; i <= 3; i++) {
        //cin >> r;
        fin >> r;
        //cout << r << endl;
        fout << r << endl;
    }

    fin.close();
    fout.close();

    return 0;
}
/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// This program : 
// - demonstrates seekg() function
// - by reading a file from specified position

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    char ch;

    fin.open("file-5.bin", ios::in | ios::binary);
    if (!fin) {
        cout << "File open error.\n";
        return 1;
    }
    
    fin.seekg(9, ios::beg);
    while (!fin.eof()) {
        fin.get(ch);
        cout << ch;
    }

    fin.close();
    return 0;
}

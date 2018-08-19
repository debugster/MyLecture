/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// This program : 
// - demonstrates rdstate() function

#include <iostream>
#include <fstream>

using namespace std;

void checkStatus(ifstream &fin);

int main()
{
    ifstream fin;
    char ch;

    fin.open("file-5.bin", ios::in | ios::binary);
    if (!fin) {
        cout << "File open error.\n";
        return 1;
    }
    
    while (!fin.eof()) {
        fin.get(ch);
        cout << ch;
        checkStatus(fin);
    }
    checkStatus(fin);

    fin.close();
    return 0;
}

void checkStatus(ifstream &fin)
{
    ios::iostate i;

    i = fin.rdstate();

    if (i && ios::eofbit) cout << "EOF encountered.\n";
    else if (i && ios::failbit) cout << "Non-Fatal I/O error.\n";
    else if (i && ios::badbit) cout << "Fatal I/O error.\n";
}
/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// This program : 
// - opens a binary file named "file-2.bin" as an input file, which was created by the previous program
// - reads the contents of the file using read() function
// - closes the file

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ifstream fin;
    int i;
    double d;
    char str[100];

    fin.open("file-2.bin", ios::in | ios::binary); // opens the file using open() function in input mode
    
    // checks if the stream has opened the file or not
    if (!fin.is_open()) {
        cout << "File open error 1!\n";
        return 1;
    }

    fin.read((char *) &i, sizeof(i));
    fin.read((char *) &d, sizeof(d));
    fin.read(str, strlen(str));

    cout << i << endl;
    cout << d << endl;
    cout << str << endl;

    fin.close(); // closes the file linked with the stream

    return 0;
}
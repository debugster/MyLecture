/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// This program : 
// - demonstrates seekp() function
// - by changing a specific character in a file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream f;

    f.open("file-5.bin", ios::in | ios::out | ios::binary);
    if (!f) {
        cout << "File open error.\n";
        return 1;
    }
    
    f.seekp(17, ios::beg);
    f.put('9');

    f.close();
    return 0;
}

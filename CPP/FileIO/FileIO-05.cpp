/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// This program : 
// - creates a binary file named "file-3.bin" as an output file
// - writes some floating numbers to it
// - closes the file
// - reopens the file as an input file
// - reads numbers from it
// - counts how many characters (bytes) are read
// - closes it again

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    char ch;
    double numbers[] = {1.556, 2.36, -6.4, 0.59, 25.4, -1.69};
    double copied[] = {-1, -2, -3, -4, -5, -6};

    fout.open("file-3.bin", ios::out | ios::binary); // opens the file using open() function in output mode
    
    // checks if the stream has opened the file or not
    if (!fout.is_open()) {
        cout << "File open error 1!\n";
        return 1;
    }

    fout.write((char *) numbers, sizeof(numbers)); 

    fout.close(); // closes the file linked with the stream

    ifstream fin("file-3.bin", ios::in | ios::binary); // opens the file using built-in constructor in input mode

    // checks if the stream has opened the file or not
    if (!fin) {
        cout << "File open error 2!\n";
        return 1;
    }

    fin.read((char *) &copied, sizeof(copied));

    for (int i = 0; i < sizeof(copied) / sizeof(copied[0]); i++) {
        cout << i + 1 << " : " << copied[i] << endl;
    }
    cout << "Total " << fin.gcount() << " characters (bytes) are read." << endl;

    fin.close(); // closes the file linked with the stream

    return 0;
}
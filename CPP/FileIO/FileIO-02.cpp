/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// This program : 
// - creates a binary file named "file.bin" as an output file
// - writes information to it
// - closes the file
// - reopens the file as an input file
// - reads information from it
// - closes it again

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    char ch;

    fout.open("file.bin", ios::out | ios::binary); // opens the file using open() function in output mode
    
    // checks if the stream has opened the file or not
    if (!fout.is_open()) {
        cout << "File open error 1!\n";
        return 1;
    }

    cout << "Write # to stop\n";
    do {
        cout << ": ";
        cin >> ch;
        fout.put(ch);
    } while (ch != '#');

    fout.close(); // closes the file linked with the stream

    ifstream fin("file.bin", ios::in | ios::binary); // opens the file using built-in constructor in input mode

    // checks if the stream has opened the file or not
    if (!fin) {
        cout << "File open error 2!\n";
        return 1;
    }

    while (true) {
        fin.get(ch);

        // checks for the end of file
        if (fin.eof()) {
            break;
        }

        cout << ch;
    }
    cout << endl;

    fin.close(); // closes the file linked with the stream

    return 0;
}
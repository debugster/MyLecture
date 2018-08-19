/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// This program : 
// - creates a text file named "file.txt" as an output file
// - writes information to it
// - closes the file
// - reopens the file as an input file
// - reads information from it
// - closes it again

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream fout;
    string str;

    fout.open("file.txt"); // opens the file using open() function in output mode
    
    // checks if the stream has opened the file or not
    if (!fout.is_open()) {
        cout << "File open error 1!\n";
        return 1;
    }

    cout << "Write END to stop\n";
    while (true) {
        cout << ": ";
        getline(cin, str);

        if (str == "END") {
            break;
        }

        fout << str << endl;
    }

    fout.close(); // closes the file linked with the stream

    ifstream fin("file.txt"); // opens the file using built-in constructor in input mode

    // checks if the stream has opened the file or not
    if (!fin) {
        cout << "File open error 2!\n";
        return 1;
    }

    while (true) {
        getline(fin, str);

        // checks for the end of file
        if (fin.eof()) {
            break;
        }

        cout << str << endl;
    }
    cout << endl;

    fin.close(); // closes the file linked with the stream

    return 0;
}
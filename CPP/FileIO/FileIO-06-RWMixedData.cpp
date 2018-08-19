/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// This program : 
// - creates a binary file named "file-4.bin" as an output file
// - writes mixed information to it
// - closes the file
// - reopens the file as an input file
// - extract information accroding to their type
// - closes it again

#include <iostream>
#include <fstream>
#include <cctype>
#include <cstdlib>

using namespace std;

int main()
{
    ofstream fout;
    char ch, str[100], *p;

    fout.open("file-4.bin", ios::out | ios::binary); // opens the file using open() function in output mode
    
    // checks if the stream has opened the file or not
    if (!fout.is_open()) {
        cout << "File open error 1!\n";
        return 1;
    }

    fout << 123 << "Hello, C++!" << 4567;
    fout << "this is a string." << 2345.6789 << "BYE" << endl;

    fout.close(); // closes the file linked with the stream

    ifstream fin("file-4.bin", ios::in | ios::binary); // opens the file using built-in constructor in input mode

    // checks if the stream has opened the file or not
    if (!fin) {
        cout << "File open error 2!\n";
        return 1;
    }

    do {
        p = str; // now, p points to str[]
        ch = fin.peek();

        // let's check what type of character ch holds
        // if ch holds a numeric digit
        if (isdigit(ch)) {
            // then keep reading while a non-digit character is found
            while (isdigit(*p = fin.get())) {
                p++;
            }
            fin.putback(*p); // put back the non-digit character into stream
            *p = '\0';
            cout << "Integer found : " << strtol(str, NULL, 10) << endl;
        }
        // if ch holds an alphabet
        else if (isalpha(ch)) {
            // then keep reading while a numeric digit is found
            while (isalpha(*p = fin.get())) {
                p++;
            }
            fin.putback(*p); // put back the numeric digit into stream
            *p = '\0';
            cout << "String found : " << str << endl;
        }
        else {
            fin.get(); // ignore the character
        }

    } while (!fin.eof());
    cout << endl;

    fin.close(); // closes the file linked with the stream

    return 0;
}
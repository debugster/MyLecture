/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// This program : 
// - creates a binary file named "file-2.bin" as an output file
// - writes an int, a double and a string using write() function
// - closes the file

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ofstream fout;
    int i = 123456;
    double d = 25.6780;
    char str[] = "Hello, C++!";

    fout.open("file-2.bin", ios::out | ios::binary); // opens the file using open() function in output mode
    
    // checks if the stream has opened the file or not
    if (!fout.is_open()) {
        cout << "File open error 1!\n";
        return 1;
    }

    fout.write((char *) &i, sizeof(i));
    fout.write((char *) &d, sizeof(d));
    fout.write(str, strlen(str) + 1);

    fout.close(); // closes the file linked with the stream

    return 0;
}
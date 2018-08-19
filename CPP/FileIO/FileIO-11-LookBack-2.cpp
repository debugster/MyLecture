/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// Let's take a look back again ;)
// from IO-Manipulators-OwnVersions/OwnManipulators-04.cpp
// This program displays current system date and time using user defined manipulator

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

istream &getPass(istream &input)
{
    cout << "\aEnter your password : ";

    return input;
}

ostream &getDateAndTime(ostream &output)
{
    time_t now = time(0); // gets the current system date and time
    char *dt = ctime(&now); // converts current date and time into char *
    string timeNow = dt; // casting char * into std::string
    timeNow[timeNow.size() - 1] = ' '; // replacing newline with blank space
    output << timeNow << ": ";

    return output;
}

int main()
{
    string str;
    ofstream fout("file-11.log");

    if (!fout) {
        cout << "Log open error.\n";
        return 1;
    }

    cin >> getPass >> str;
    while (str != "password") {
        fout << getDateAndTime << "Wrong Password. Try again.\n";
        cin >> getPass >> str;
    }

    fout << getDateAndTime << "Successfully logged in.\n";

    fout.close();

    return 0;
}
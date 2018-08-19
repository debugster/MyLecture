/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

#include <iostream>
#include <string>

using namespace std;

istream &getPass(istream &input)
{
    cout << "\aEnter your password : ";

    return input;
}

int main()
{
    string str;

    do {
        cin >> getPass >> str;
    } while (str != "password");

    cout << "Successfully logged in.\n";

    return 0;
}
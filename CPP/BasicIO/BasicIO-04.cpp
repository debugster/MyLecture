/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

#include <iostream>

using namespace std;

void showFlags();

int main()
{
    showFlags();

    ios::fmtflags F;
    F = ios::hex | ios::uppercase | ios::showbase;
    cout.flags(F); // sets the settings as indicated by F

    showFlags();

    return 0;
}

// displays the current status of different format flags
void showFlags()
{
    ios::fmtflags f;

    f = cout.flags(); // gets flag settings

    /*
    if (f & ios::skipws) cout << "skipws is ON\n";
    else cout << "skipws is OFF\n";
    */
    
    cout << "skipws is " << ((f & ios::skipws) ? "ON\n" : "OFF\n");
    cout << "left is " << ((f & ios::left) ? "ON\n" : "OFF\n");
    cout << "right is " << ((f & ios::right) ? "ON\n" : "OFF\n");
    cout << "internal is " << ((f & ios::internal) ? "ON\n" : "OFF\n");
    cout << "dec is " << ((f & ios::dec) ? "ON\n" : "OFF\n");
    cout << "oct is " << ((f & ios::oct) ? "ON\n" : "OFF\n");
    cout << "hex is " << ((f & ios::hex) ? "ON\n" : "OFF\n");
    cout << "showbase is " << ((f & ios::showbase) ? "ON\n" : "OFF\n");
    cout << "showpoint is " << ((f & ios::showpoint) ? "ON\n" : "OFF\n");
    cout << "showpos is " << ((f & ios::showpos) ? "ON\n" : "OFF\n");
    cout << "uppercase is " << ((f & ios::uppercase) ? "ON\n" : "OFF\n");
    cout << "scientific is " << ((f & ios::scientific) ? "ON\n" : "OFF\n");
    cout << "fixed is " << ((f & ios::fixed) ? "ON\n" : "OFF\n");
    cout << "boolalpha is " << ((f & ios::boolalpha) ? "ON\n" : "OFF\n");
    cout << "\n\n";
}
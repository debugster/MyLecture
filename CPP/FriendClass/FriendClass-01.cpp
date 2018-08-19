/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// Understanding Friend Class - 01
// Here, we are trying to set the FBI password through CIA object
// But our program does not compile
// Q1: Can you figure out the reason?
// Q2: What can be the possible solution?

#include <iostream>

using namespace std;

class FBI
{
    int fbiPass;
public:    
    int getFBIPass()
    {
        return fbiPass;
    }
};

class CIA
{
    int ciaPass;
public:
    void setFBIPass(FBI &theFBI, int pass)
    {
        theFBI.fbiPass = pass;
    }
};

int main()
{
    FBI obFBI;
    CIA obCIA;

    obCIA.setFBIPass(obFBI, 123456);

    cout << "FBI Password is " << obFBI.getFBIPass() << endl;

    return 0;
}
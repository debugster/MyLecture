/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// Understanding Friend Class - 02
// Solution is to make CIA a friend of FBI, so that CIA can set FBI password
// But keep in mind that, since CIA is a friend of FBI,
// that does not mean that FBI is a friend of CIA
// Hence, FBI cannot set CIA password, though CIA can do so for FBI

#include <iostream>

using namespace std;

class FBI
{
    friend class CIA; // Declaring CIA as a friend of FBI
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

/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// The problem in the previous example is fixed here
// We have to return back the stream object reference

#include <iostream>
#include <string>

using namespace std;

class Student
{   
    string name;
    int roll;

public: 
    Student(string n, int r)
    {
        name = n;
        roll = r;
    }

    void show()
    {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
    }

    friend ostream &operator<<(ostream &output, Student s);
};

ostream &operator<<(ostream &output, Student s)
{
    output << "Name : " << s.name << endl;
    output << "Roll : " << s.roll << endl;
    
    return output;
}

int main()
{
    Student s1("Bill Gates", 5), s2("Steve Jobs", 2);
    // cout << s1;
    // cout << s2;

    cout << s1 << s2;

    return 0;
}
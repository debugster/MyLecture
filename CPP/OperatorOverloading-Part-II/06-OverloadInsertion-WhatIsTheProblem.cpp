/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// Q: What is the problem now?

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

    friend void operator<<(ostream &output, Student s);
};

void operator<<(ostream &output, Student s)
{
    output << "Name : " << s.name << endl;
    output << "Roll : " << s.roll << endl;
}

int main()
{
    Student s1("Bill Gates", 5), s2("Steve Jobs", 2);
    // cout << s1;
    // cout << s2;

    cout << s1 << s2;

    return 0;
}
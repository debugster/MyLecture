/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// In the previous solution, we violated one of the principles of OOP : Encapsulation
// We can fix it by making the overloaded function as a friend of Student class

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
    cout << s1;
    cout << s2;

    return 0;
}

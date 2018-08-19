/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// Here, we overloaded insertion operator (<<) as required
// But the problem persists
// Q: Can you tell why?

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
/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// We want the same output as the previous program
// Q: What is the problem here?

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

int main()
{
    Student s1("Bill Gates", 5), s2("Steve Jobs", 2);
    cout << s1;
    cout << s2;

    return 0;
}
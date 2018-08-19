/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// Inside the overloaded function, we were trying to access private members of Student class
// But, that function can't access them because it itself isn't a member function of that class
// So, we may want to make private members public and try again

#include <iostream>
#include <string>

using namespace std;

class Student
{
public:    
    string name;
    int roll;

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
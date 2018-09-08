/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// In the previous program, "section" member holds a common piece of info for all of the students
// So, instead of changing their "section" fields separately,
// we can make this member static
// Thus, this field becomes a class variable instead of an object variable
// and change in "section" through an object reflects to change in for rest of the objects
// Let's see

#include <iostream>
#include <string>

using namespace std;

class Student
{
    string name;
    int roll;
    //string section;

public:
    static string section;
    
    Student()
    {
        // empty constructor
    }

    Student(string n, int r, string s)
    {
        name = n;
        roll = r;
        section = s;
    }

    void setName(string n)
    {
        name = n;
    }

    void setRoll(int r)
    {
        roll = r;
    }

    void setSection(string s)
    {
        section = s;
    }

    string getName()
    {
        return name;
    }

    int getRoll()
    {
        return roll;
    }

    string getSection()
    {
        return section;
    }

    void show()
    {
        cout << "Name\t: " << getName() << endl;
        cout << "Roll\t: " << getRoll() << endl;
        cout << "Section\t: " << getSection() << endl;
    }
};

// actual declaration of "section"
string Student::section;

using namespace std;

int main()
{
    string name[5] = {"Steve Jobs", "Bill Gates", "Tom Cruise", "Ananta Jalil", "Shahrukh Khan"};
    Student st[5];

    for (int i = 0; i < 5; i++) {
        st[i].setName(name[i]);
        st[i].setRoll(i + 1);
        //st[i].setSection("5A");
    }
    
    // setting section name by qualifying "section" with class name
    Student::section = "5A";

    for (int i = 0; i < 5; i++) {
        st[i].show();
    }

    // Now let's their section as they are promoted to next semester
    // setting section name by call setSection() for one object only

    st[0].setSection("6A");

    // Let's see if the changes have been reflected to the rest

    cout << "\n\n";
    for (int i = 0; i < 5; i++) {
        st[i].show();
    }

    return 0;
}
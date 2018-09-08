/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// Let's create a Student class with these info
// - name
// - roll
// - section

#include <iostream>
#include <string>

using namespace std;

class Student
{
    string name;
    int roll;
    string section;

public:
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

using namespace std;

int main()
{
    string name[5] = {"Steve Jobs", "Bill Gates", "Tom Cruise", "Ananta Jalil", "Shahrukh Khan"};
    Student st[5];

    for (int i = 0; i < 5; i++) {
        st[i].setName(name[i]);
        st[i].setRoll(i + 1);
        st[i].setSection("5A");
    }

    for (int i = 0; i < 5; i++) {
        st[i].show();
    }

    // Now let's change their section as they are promoted to next semester

    for (int i = 0; i < 5; i++) {
        st[i].setSection("6A");
    }

    // Let's see if the changes have been saved

    cout << "\n\n";
    for (int i = 0; i < 5; i++) {
        st[i].show();
    }

    return 0;
}
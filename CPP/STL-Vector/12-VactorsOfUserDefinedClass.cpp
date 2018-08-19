/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Student
{
    int roll;
    int PHY;
    int MATH;
    
public:
    Student();
    Student(int r, int p, int m);
    void show();
};

Student::Student()
{
    roll = -1;
    PHY = MATH = 0;
}
Student::Student(int r, int p, int m)
{
    roll = r;
    PHY = p;
    MATH = m;
}
void Student::show()
{
    cout << "Roll\t:" << roll << endl;
    cout << "PHY\t:" << PHY << endl;
    cout << "MATH\t:" << MATH << endl << endl;
}

int main()
{
    srand(time(NULL));
    
    vector<Student>stuV;

    for (int i = 1; i <= 5; i++) {
        stuV.push_back(Student(i, rand() % 101, rand() % 101));
    }
    for (int i = 0; i < stuV.size(); i++) {
        stuV[i].show();
    }

    return 0;
}

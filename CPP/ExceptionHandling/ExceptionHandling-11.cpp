/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// In this program,
// We'll see,
// - demonstration of stack unwinding

#include <iostream>
#include <stdexcept>

using namespace std;

// student() throws runtime error
void student()
{
   cout << "Inside student()" << endl;

   // no try block, stack unwinding occurs, return control to lecturer()
   throw runtime_error("runtime_error in student()");
}

// lecturer() invokes student
void lecturer()
{
   cout << "Before student() is called inside lecturer()" << endl;
   student(); // stack unwinding occurs, return control to professor()
   cout << "After student() is called inside lecturer()" << endl; // not printed
}

// professor() invokes lecturer
void professor() 
{
   cout << "Before lecturer() is called inside professor()" << endl;
   lecturer(); // stack unwinding occurs, return control to main()
   cout << "After lecturer() is called inside professor()" << endl; // not printed
}

int main()
{
   try 
   {
      cout << "professor() is called inside main()" << endl;
      professor(); // calls professor() which throws runtime_error
   }
   catch (runtime_error &e) // handle runtime_error thrwon by student()
   {
      cout << "Exception occurred: " << e.what() << endl;
      cout << "Exception handled in main()" << endl;
   }

   return 0;
}
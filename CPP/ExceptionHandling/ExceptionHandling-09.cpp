/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// In this program,
// We'll see a more convenient way to solve the problem encountered
// in ExceptionHandling\ExceptionHandling-07.cpp

#include <iostream>
#include <stdexcept>

using namespace std;

#define MAX 5

class StackOverflowException : public runtime_error
{
public:
    StackOverflowException() : runtime_error("Stack overflow")
    {
        // blank description
    }    
};

class StackUnderflowException : public runtime_error
{
public:
    StackUnderflowException() : runtime_error("Stack underflow")
    {
        // blank description
    }    
};

class StackEmptyException : public runtime_error
{
public:
    StackEmptyException() : runtime_error("Stack is empty")
    {
        // blank description
    }
};

template<typename dataType>
class STACK
{
    int tos; // index number of top of stack
    dataType data[MAX + 1];

public:
    STACK()
    {
        tos = 0;
    }

    void push(dataType x)
    {
        if (tos >= MAX) {
            throw StackOverflowException();
        }
        data[++tos] = x;
    }

    void pop()
    {
        if (tos <= 0) {
            throw StackUnderflowException();
        }
        tos--;
    }

    dataType top()
    {
        if (tos == 0) {
            throw StackEmptyException();
        }

        return data[tos];
    }
};

int main()
{
    STACK<int>sInt;
    int myInt[] = {0, 6, 4, -1, 10, -1, 55, 23, -2, -3, -1};

    for (int i = 1; i <= 10; i++) {
        try {
            sInt.push(myInt[i]);
        }
        catch (StackOverflowException &e) {
            cout << "Exception : " << e.what() << endl;
        }
        
    }

    for (int i = 1; i <= 10; i++) {
        try {
            cout << "TOP: " << sInt.top() << endl;
        }
        catch (StackEmptyException &e) {
            cout << "Exception : " << e.what() << endl;
        }

        try {
            sInt.pop();
        }
        catch (StackUnderflowException &e) {
            cout << "Exception : " << e.what() << endl;
        }
    }

    return 0;
}

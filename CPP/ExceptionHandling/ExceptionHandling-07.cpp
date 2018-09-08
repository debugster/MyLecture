/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// Solution to the previous problem is given here

#include <iostream>
#include <string>

using namespace std;

#define MAX 5

string StackEmptyError = "Stack is empty";

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
            cout << "Stack Overflow.\n";
            return;
        }
        data[++tos] = x;
    }

    void pop()
    {
        if (tos <= 0) {
            cout << "Stack Underflow.\n";
            return;
        }
        tos--;
    }

    dataType top()
    {
        if (tos == 0) {
            throw StackEmptyError;
        }

        return data[tos];
    }
};

int main()
{
    STACK<int>sInt;
    int myInt[] = {0, 6, 4, -1, 10, -1, 55, 23, -2, -3, -1};

    for (int i = 1; i <= 10; i++) {
        sInt.push(myInt[i]);
    }

    for (int i = 1; i <= 10; i++) {
        try {
            cout << "TOP: " << sInt.top() << endl;
        }
        catch (string str) {
            cout << str << endl;
        }

        sInt.pop();
    }

    return 0;
}

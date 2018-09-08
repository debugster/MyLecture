/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// Let's look back to "TemplateClass/Stack.cpp"
// While calling top() function from the stack class we've made
// - returns the top of stack
// - returns -1 if the stack is empty
// This structure of our stack class assumes that there are no negative numbers holded by itself
// Q: What will happen when we try to push negative numbers including -1?
// Q: How can we distinguish between -1's?

#include <iostream>

using namespace std;

#define MAX 5

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
        if (tos != 0) {
            return data[tos];
        }

        return -1;
    }
};

int main()
{
    STACK<int>sInt;
    int myInt[] = {0, 6, 4, -1, 10, -1, 55, 23, -2, -3, -1};
    int t;

    for (int i = 1; i <= 10; i++) {
        sInt.push(myInt[i]);
    }

    for (int i = 1; i <= 10; i++) {
        cout << "TOP: ";
        t = sInt.top();
        if (t != -1) {
            cout << t << endl;
        }
        else {
            cout << "Stack is empty.\n";
        }

        sInt.pop();
    }

    return 0;
}
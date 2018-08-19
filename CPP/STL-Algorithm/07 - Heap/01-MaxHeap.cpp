/***************************
 * Author : Nayeem Mahmood *
 *   alive.dew@gmail.com   *
 ***************************/

// Max Heap
// Usage of make_heap(), pop_heap(), push_heap(), sort_heap() are demonstrated
// make_heap()  :   Rearranges the elements in the range [first,last) in such a way that they form a heap
// pop_heap()   :   Rearranges the elements in the heap range [first,last) in such a way that the part considered a heap is shortened by one;
//                  The element with the highest value is moved to (last-1)
// push_heap()  :   Given a heap in the range [first,last-1), this function extends the range considered a heap to [first,last)
//                  by placing the value in (last-1) into its corresponding location within it
// sort_heap()  :   Sorts the elements in the heap range [first,last) into ascending order

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int myInt[] = {20, 40, 60, 15, 30};
    vector<int> myVector(myInt, myInt + 5);

    make_heap(myVector.begin(), myVector.end()); // myVector becomes a Max Heap
    cout << "Initial Heap Max : " << myVector.front() << endl;
    cout << "Initial Max Heap : ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    pop_heap(myVector.begin(), myVector.end()); // Heap Max is moved to the last position
    myVector.pop_back(); // last element is popped out
    cout << "Heap Max after pop : " << myVector.front() << endl;

    myVector.push_back(27); // a new element is pushed into myVector
    push_heap(myVector.begin(), myVector.end()); // a new Max Heap is formed
    cout << "Heap Max after push : " << myVector.front() << endl;

    cout << "Final Max Heap : ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;
    
    sort_heap(myVector.begin(), myVector.end()); // sorts the elements of Max Heap in ascending order

    cout << "Final sorted range : ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}
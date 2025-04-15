
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
devise a plan:


- create a class named StackX.
- in private:
    - make a 3 variables ( a vector of type double "myStackVector") - ( int maxSize) - (int top);
- in public:
    - make a default constructor that takes a (int s) and initialize maxSize with it, and top with -1.
        - resize the vector with maxSize.
    - make a method called "push" takes (double j) and return void.
        - increment top by assign the value ( j ) we get it, to the elements of myStackVector at index top by one.
    - make a method called "pop" takes nothing and return double.
        - return our myStackVector decremented by one at the index top, the oppsite of what we did in push.
    - make a method called "peek" takes nothing and return double.
        - just return the current myStackVector at index top value.
    - make a method called "isEmpty" takes nothing and return bool.
        - just return true if our myStackVector is empty otherwise false by if top is equal to -1.
    - make a method called "isFull" takes nothing and return bool.
        - return true if the current myStackVector is full by check if top is equal to maxSize - 1 value.


*/

class StackX
{
private:
    vector<double> myStackVector;
    int maxSize;
    int top;

public:
    StackX(int max) : maxSize(max), top(-1)
    {
        myStackVector.resize(maxSize);
    }

    void push(double value)
    {

        myStackVector[top++] = value;
    }
    double pop()
    {
        return myStackVector[top--];
    }

    double peek()
    {
        return myStackVector[top];
    }

    bool isEmpty()
    {
        return (top == -1);
    }
    bool isFull()
    {
        return (top == maxSize - 1);
    }
};

int main()
{

    StackX st(100);

    st.push(12);
    st.push(24);
    st.push(35);
    st.push(71);
    st.push(21);
    st.push(98);
    st.push(56);

    cout << st.peek();
}

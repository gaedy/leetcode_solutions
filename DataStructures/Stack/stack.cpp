
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

class Stack
{
public:
    explicit Stack(const int max) : maxSize(max), nElements(0), top(-1)
    {
        data.reserve(maxSize);
    }

    void push(const double value)
    {
        data[++top] = value; // assign before ( must be ++top not top++ );
        nElements++;
    }

    double peek()
    {
        return data[top];
    }

    double pop()
    {
        nElements--;
        return data[top--];
    }

    bool isEmpty()
    {
        return (nElements < 1);
    }

    void display()
    {
        cout << "Stack Peek: " << peek() << ", Number of Stack Elements: " << nElements;

        cout << endl;
    }

private:
    vector<double> data;
    int maxSize;
    int nElements;
    int top;
};

int main()
{

    Stack s(10);

    s.push(59);
    s.push(29);
    s.push(39);
    s.push(38);
    s.push(47);
    s.push(89);

    s.display();
    s.pop();

    s.display();
}

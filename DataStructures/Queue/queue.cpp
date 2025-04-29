
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
devise a plan:


- create a class named QueueX.
- in private:
    - make a 5 variables ( a vector of type int "myQueueVector") - ( int maxSize) - (int front)- ( int rear) - (int nElements);
- in public:
    - make a default constructor takes (int s) and initialize default values for maxSize to "s" and front to 0
        and rear to -1 and nElements to 0.
            - resize the vector with maxSize.
    - make a method called "insert" takes int j and return void.
        - if rear is equal to maxSize -1 assign -1 to rear.
            - assign j value to the vector at index rear by increasing one element.
            - increment one to nElements.
    - make a method called "remove" takes nothing and return int.
        - assign the vector at index front with increased one to a temp variable of type int.
        - if current front is equal to maxSize return front = 0.
        - remove one element from nElements.
        - return temp.
    - make a method called "peekFront" takes nothing and return int.
        - return the vector at index front.
    - make a method called "isEmpty" takes nothing and return bool.
        - return true if the nElements == 0.
    - make a method called "isFull" takes nothing and return bool.
        return true if nElements == maxSize.
    - make a method called "size" takes nothing and return int.
        - return nElements.




*/

class QueueX
{
private:
    vector<int> myQueueVector;
    int maxSize;
    int front;
    int rear;
    int nElements;

public:
    QueueX(int max) : maxSize(max), front(0), rear(-1), nElements(0)
    {
        myQueueVector.resize(maxSize);
    }

    void insert(int value)
    {
        if (rear == maxSize - 1)
        {
            rear = -1;
            
        }
        myQueueVector[++rear] = value;
        nElements++;
    }

    int remove()
    {

        int temp = myQueueVector[front++];

        if (front == maxSize)
        {
            front = 0;
        }

        nElements--;
        return temp;
    }

    int peekFront()
    {
        return myQueueVector[front];
    }
    bool isEmpty()
    {
        return (nElements == 0);
    }

    bool isFull()
    {
        return (nElements == maxSize);
    }

    int size()
    {
        return nElements;
    }
    void display()
    {
        for (int i{0}; i < nElements; i++)
        {
            cout << myQueueVector[i] << " ";
        }
        cout << endl;
    }
};

int main()
{

    QueueX q(50);

    q.insert(50);
    q.insert(4);
    q.insert(2);
    q.insert(9);
    q.insert(3);
    q.insert(8);

    // cout << q.peekFront();
    q.display();
    q.remove();
    q.display();
}
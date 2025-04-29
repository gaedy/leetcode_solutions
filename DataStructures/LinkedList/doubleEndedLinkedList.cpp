#include <iostream>
#include <vector>
using namespace std;

/*
devise a plan:

- create 2 classes one for node and other for the linkedlist.
    - every node has a value and a pointer to the next node.
    - make a default constructor for node class and a method for printing nodes.
- in linkedlist you have first node ( head ) and last node ( tail ).
- make a constructor too, and deconstructor to deleting all links after finished calling of oject.
- make a method to check if its empty.
- make 2 methods for inserting in first node and in last.
- make another method to remove the first node.
- finally make a method for printing the linkedlist.


*/

class Node
{

public:
    double data;
    Node *nextNode;
    Node(double d) : data(d), nextNode(nullptr) {}
    void displayNodes()
    {
        cout << "{ " << data << " }";
    }
};

class LinkedList
{
private:
    Node *firstNode;
    Node *lastNode;

public:
    LinkedList() : firstNode(nullptr), lastNode(nullptr) {}
    ~LinkedList()
    {
        Node *currentNode = firstNode;

        while (currentNode != nullptr)
        {
            Node *temp = currentNode;
            currentNode = currentNode->nextNode;
            delete temp;
        }
    }

    bool isEmpty()
    {
        return (firstNode = nullptr);
    }

    void insertFirst(double v)
    {
        Node *newNode = new Node(v);

        if (isEmpty())
        {
            lastNode = newNode; // if the list is empty, set lastNode to point to newNode.
        }
        newNode->nextNode = firstNode; // set newNode’s nextNode to point to the current firstNode.
        firstNode = newNode;           // update firstNode to point to newNode.
    }
    void insertLast(double v)
    {
        Node *newNode = new Node(v);

        if (isEmpty())
        {
            firstNode = newNode;
        }
        else
        {
            lastNode->nextNode = newNode;
        }
        lastNode = newNode;
    }
    void removeFirst()
    {
        Node *temp = firstNode;
        if (firstNode->nextNode == nullptr)
        {
            lastNode = nullptr;
        }
        firstNode = firstNode->nextNode;
        delete temp;
    }
};

int main()
{
}
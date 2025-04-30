#include <iostream>
#include <vector>

using namespace std;

struct Node
{
    double data;
    Node *nextNode;
    Node *prevNode;
    Node(double d) : data(d), nextNode(nullptr), prevNode(nullptr) {}
    void displayNodes()
    {
        cout << "{ " << data << " } ";
    }
};

typedef Node *node;

class LinkedList
{
private:
    node first;
    node last;

public:
    LinkedList() : first(nullptr), last(nullptr) {}
    ~LinkedList()
    {
        node current = first;
        while (current != nullptr)
        {
            node oldCurrent = current;
            current = current->nextNode;
            delete oldCurrent;
        }
    };

    bool isEmpty()
    {
        return (first == nullptr);
    }

    void insertFirst(double d)
    {
        node newNode = new Node(d);
        if (isEmpty())
        {
            last = newNode;
        }
        else
        {
            first->prevNode = newNode;
        }
        newNode->nextNode = first;
        first = newNode;
    }

    void insertLast(double d)
    {
        node newNode = new Node(d);
        if (isEmpty())
        {
            first = newNode;
        }
        else
        {
            last->nextNode = newNode;
            newNode->prevNode = last;
        }

        last = newNode;
    }
};

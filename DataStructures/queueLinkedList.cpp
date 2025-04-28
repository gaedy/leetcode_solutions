#include <iostream>
#include <vector>
using namespace std;

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
    LinkedList() : firstNode(nullptr), lastNode(nullptr) {};
    ~LinkedList()
    {
        Node *currentNode = firstNode;
        while (currentNode != nullptr)
        {
            Node *oldNode = currentNode;
            currentNode = currentNode->nextNode;
            delete oldNode;
        }
    };

    bool isEmpty()
    {
        return (firstNode == nullptr);
    }

    void insertLast(double value)
    {
        Node *newNode = new Node(value);

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

    double removeFirst()
    {
        Node *nodeTemp = firstNode;
        double temp = firstNode->data;

        if (firstNode->nextNode == nullptr)
        {
            lastNode = nullptr;
        }
        firstNode = firstNode->nextNode;
        delete nodeTemp;
        return temp;
    }

    void displayList()
    {
        Node *pcurrent = firstNode;
        while (pcurrent != nullptr)
        {
            pcurrent->displayNodes();
            pcurrent = pcurrent->nextNode;
        }
    }
};

class QueueList
{
private:
    LinkedList *theList;

public:
    bool isEmpty()
    {
        return theList->isEmpty();
    }
    void insert(double j)
    {
        theList->insertLast(j);
    }
    double remove()
    {
        return theList->removeFirst();
    }

    void displayQueue()
    {
        cout << "Queue: ";
        theList->displayList();
    }
};

int main()
{

    QueueList q;

    q.insert(54);
    q.insert(64);
    q.insert(24);
    q.insert(14);

    q.displayQueue();
}
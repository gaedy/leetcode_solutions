#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *nextNode;
    Node *prevNode;

    Node(int d) : data(d), nextNode(nullptr), prevNode(nullptr) {};

    void displayNodes()
    {
        cout << "{ " << data << " }";
    }
};

typedef Node *node;

class dLinkedList
{
private:
    node firstNode;
    node lastNode;

public:
    dLinkedList(/* args */) : firstNode(nullptr), lastNode(nullptr) {};
    ~dLinkedList()
    {
        node currentNode = firstNode;

        while (currentNode != nullptr)
        {
            node temp = currentNode;
            currentNode = currentNode->nextNode;
            delete temp;
        }
    };

    bool isEmpty()
    {
        return (firstNode == nullptr);
    }

    void insertFirst(int value)
    {
        node newNode = new Node(value);
        if (isEmpty())
        {
            lastNode = newNode;
        }
        else
        {
            firstNode->prevNode = newNode;
        }
        newNode->nextNode = firstNode;
        firstNode = newNode;
    }

    void insertLast(int value)
    {
        node newNode = new Node(value);
        if (isEmpty())
        {
            firstNode = newNode;
        }
        else
        {
            lastNode->nextNode = newNode;
            newNode->prevNode = lastNode;
        }
        lastNode = newNode;
    }

    void removeFirst()
    {
        node temp = firstNode;
        if (firstNode->nextNode == nullptr)
        {
            lastNode = nullptr;
        }
        else
        {
            firstNode->nextNode->prevNode = nullptr;
        }
        firstNode = firstNode->nextNode;
        delete temp;
    }

    void removeLast()
    {
        node temp = lastNode;
        if (firstNode->nextNode == nullptr)
        {
            firstNode = nullptr;
        }
        else
        {
            lastNode->nextNode->prevNode = nullptr;
        }
        lastNode = lastNode->prevNode;
        delete temp;
    }

    bool insertAfter(double key, int d)
    {
        node currentNode = firstNode;
        while (currentNode->data != key)
        {

            currentNode = currentNode->nextNode;
            if (currentNode == nullptr)
            {
                return false;
            }
        }
        node newNode = new Node(d);
        if (currentNode == lastNode)
        {
            newNode->nextNode = nullptr;
            lastNode = newNode;
        }
        else
        {
            newNode->nextNode = currentNode->nextNode;
            currentNode->nextNode->prevNode = newNode;
        }
        newNode->prevNode = currentNode;
        currentNode->nextNode = newNode;
        return true;
    }

    bool removeKey(double key)
    {

        node current = firstNode;

        while (current->data != key)
        {
            current = current->nextNode;
            if (current == nullptr)
            {
                return false;
            }
        }
        if (current == firstNode)
        {
            firstNode = current->nextNode;
        }
        else
        {
            current->prevNode->nextNode = current->nextNode;
        }

        if (current == lastNode)
        {
            lastNode = current->prevNode;
        }
        else
        {
            current->nextNode->prevNode = current->prevNode;
        }
        delete current;
        return true;
    }

    void displayForward()
    {
        cout << "List (first-->last): ";
        node current = firstNode;
        while (current != nullptr)
        {
            current->displayNodes();
            current = current->nextNode;
        }
        cout << endl;
    }

    void displayBackward()
    {
        cout << "List (last-->first): ";
        node current = lastNode;
        while (current != nullptr)
        {
            current->displayNodes();
            current = current->prevNode;
        }
        cout << endl;
    }
};

int main()
{

    dLinkedList list;

    list.insertFirst(13);
    list.insertFirst(14);
    list.insertFirst(19);
    list.insertLast(36);
    list.insertLast(46);
    list.insertLast(56);

    list.displayForward();
}

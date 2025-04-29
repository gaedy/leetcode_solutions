
#include <iostream>
#include <vector>

using namespace std;

/*
devise a plan:

- make a node class and sortedlist class.
- in sortedlist make 4 methods ( isempty - insert - remove - display).
    - insert method:
        - make new node.
        - start at first.
        - remember the first node.
        - loop throw list until the end of the list or key > current.
        - go to next item.

*/

class Node
{
public:
    double data;
    Node *nextNode;

    Node(double d) : data(d), nextNode(nullptr) {}

    void displayNodes()
    {

        cout << "{ " << data << " } ";
    }
};

class SortedList
{
private:
    Node *firstNode;

public:
    SortedList() : firstNode(nullptr) {};
    ~SortedList()
    {
        Node *current = firstNode;

        while (current != nullptr)
        {
            Node *oldNode = current;
            current = current->nextNode;
            delete oldNode;
        }
    };

    bool isEmpty()
    {
        return (firstNode == nullptr);
    }

    void insert(double key)
    {
        Node *newNode = new Node(key);
        Node *prev = nullptr;
        Node *current = firstNode;

        while (current != nullptr && key > current->data)
        {
            prev = current;
            current = current->nextNode;
        }
        if (prev == nullptr)
        {
            firstNode = newNode;
        }
        else
        {
            prev->nextNode = newNode;
        }
        newNode->nextNode = current;
    }

    void remove()
    {
        Node *temp = firstNode;
        firstNode = firstNode->nextNode;
        delete temp;
    }

    void displayList()
    {
        cout << "List: ";
        Node *current = firstNode;
        while (current != nullptr)
        {
            current->displayNodes();
            current = current->nextNode;
        }
        cout << endl;
    }
};

int main()
{

    SortedList s;

    s.insert(54);
    s.insert(12);

    s.displayList();
}
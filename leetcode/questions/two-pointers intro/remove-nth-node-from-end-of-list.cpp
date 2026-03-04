#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Node
{
    int data;
    Node *nextNode;

    Node(int d) : data(d), nextNode(nullptr) {};
    void displayNodes()
    {
        cout << "{ " << data << " }" << endl;
    }
};

typedef Node *node;

class LinkedList
{
private:
    node head;

public:
    LinkedList() : head(nullptr) {};

    void insert(int d)
    {
        node newNode = new Node(d);
        newNode->nextNode = head;
        head = newNode;
    }

    void displayLinkedList()
    {
        node current = head;

        while (current != nullptr)
        {
            current->displayNodes();
            current = current->nextNode;
        }
        cout << endl;
    }

    node removeNth(int n)
    {

        node dummy = new Node(0);
        dummy->nextNode = head;

        node right = dummy;
        node left = dummy;

        for (int i = 0; i <= n; i++)
        {
            if (right == nullptr)
            {
                return head;
            }
            right = right->nextNode;
        }

        while (right != nullptr)
        {
            right = right->nextNode;
            left = left->nextNode;
        }

        if (left->nextNode != nullptr)
        {
            left->nextNode = left->nextNode->nextNode;
        }

        head = dummy->nextNode;
        return head;
    }
};

int main()

{

    LinkedList list;

    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);

    cout << "Before removal:\n";
    list.displayLinkedList();

    int nn = 5;

    list.removeNth(nn);

    cout << "After removing " << nn << "nd from end:\n";
    list.displayLinkedList();

    return 0;
}
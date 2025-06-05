#include <iostream>
#include <vector>
using namespace std;

/*
devise a plan:

- Node and Tree Classes:
    - Node:
        - Constructor and display nodes.
    - Tree:
        - find, insert, traverse and display.


*/
struct Node
{
    int iData;
    double Ddata;

    Node *rightChild;
    Node *leftChild;

    Node() : iData(10), Ddata(0), rightChild(nullptr), leftChild(nullptr)
    {
    }
    void display()
    {
        cout << "{ " << iData << ", " << Ddata << " } ";
    }
};

typedef Node *node;

class Tree
{
private:
    node root;

public:
    Tree() : root(nullptr) {};

    node find(int key)
    {

        node currentNode = root;

        while (currentNode->iData != key)
        {
            if (key < currentNode->iData)
            {
                currentNode = currentNode->leftChild;
            }
            else
            {
                currentNode = currentNode->rightChild;
            }
            if (currentNode == nullptr)
            {
                return nullptr;
            }
        }
        return currentNode;
    };

    void insert(int id, double dd)
    {

        node newNode = new Node;
        newNode->iData = id;
        newNode->Ddata = dd;

        if (root == nullptr)
        {
            root = newNode;
        }
        else
        {
            node current = root;
            node parent;

            parent = current;
            while (true)
            {
                if (id < current->iData)
                {
                    current = current->leftChild;
                    if (current == nullptr)
                    {
                        parent->leftChild = newNode;
                        return;
                    }
                }
                else
                {
                    current = parent->rightChild;
                    if (current == nullptr)
                    {
                        parent->rightChild = newNode;
                        return;
                    }
                }
            }
        }
    };
    void traverse(int traType) {

    };

    void displayTrees() {
    };
};

int main()
{

    Node n;

    n.display();
}
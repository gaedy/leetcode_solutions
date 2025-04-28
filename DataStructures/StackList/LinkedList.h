//
// Created by ag on 2025/4/24.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "Node.h"

class LinkedList
{
private:
    Node *headNode;

public:
    LinkedList() : headNode(nullptr)
    {
    }

    void insertFirst(int data)
    {
        Node *newNode = new Node(data);
        newNode->nextNode = headNode;
        headNode = newNode;
    }

    double remove()
    {
        const Node *temp = headNode;
        headNode = headNode->nextNode;
        const double key = temp->value;
        delete temp;
        return key;
    }

    void displayLinkedList() const
    {
        Node *currentNode = headNode;
        while (currentNode != nullptr)
        {
            currentNode->displayNodes();
            currentNode = currentNode->nextNode;
        }
        std::cout << std::endl;
    }
};

#endif // LINKEDLIST_H

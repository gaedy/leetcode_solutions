//
// Created by ag on 2025/4/24.
//

#ifndef STACKLIST_H
#define STACKLIST_H
#include <iostream>
#include "Node.h"
#include "LinkedList.h"


class StackList {
private:
    LinkedList *theList;

public:
    StackList() {
        theList = new LinkedList;
    }

    ~StackList() {
        delete theList;
    }

    void push(const int data) const {
        theList->insertFirst(data);
    }

    double pop() const {
        return theList->remove();
    }

    void displayStackList()const {
        std::cout << "The Stack: ";
        theList->displayLinkedList();
    }
};


#endif //STACKLIST_H

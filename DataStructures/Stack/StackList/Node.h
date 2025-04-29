//
// Created by ag on 2025/4/24.
//

#ifndef NODE_H
#define NODE_H

#include <iostream>


class Node {
public:
    int value;
    Node *nextNode;

    explicit Node(const int v) : value(v), nextNode(nullptr) {
    }

    void displayNodes() const {
        std::cout << "{ " << value << " } ";
    }
};


#endif //NODE_H

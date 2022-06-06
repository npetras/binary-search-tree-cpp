//
// Created by Nicolas Petras on 06/06/2022.
//

#ifndef P11_BINARY_TREE_CLION_BINARYSEARCHTREE_H
#define P11_BINARY_TREE_CLION_BINARYSEARCHTREE_H


#include "Node.h"

class BinarySearchTree {
    Node* root;

    // utility (private) methods
    void printInOrderHelper(Node *currRoot);
    void insertNode(Node* nodeToAdd,  Node* root);
    static Node* createNode(int value);

public:
    BinarySearchTree();
    ~BinarySearchTree();
    void insert(int value);
    void printInOrder();
};

#endif //P11_BINARY_TREE_CLION_BINARYSEARCHTREE_H

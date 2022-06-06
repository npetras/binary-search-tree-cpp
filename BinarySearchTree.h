//
// Created by Nicolas Petras on 06/06/2022.
//

#ifndef P11_BINARY_TREE_CLION_BINARYSEARCHTREE_H
#define P11_BINARY_TREE_CLION_BINARYSEARCHTREE_H


#include "Node.h"

class BinarySearchTree {
    Node* root;

    void printInOrderHelper(Node *currRoot);
    void insertNode(Node* nodeToAdd,  Node* root);

public:
    BinarySearchTree();
    ~BinarySearchTree();
    Node* createNode(int value);
    void insert(int value);
    void printInOrder();
};

#endif //P11_BINARY_TREE_CLION_BINARYSEARCHTREE_H

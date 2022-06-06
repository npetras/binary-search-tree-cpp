//
// Created by Nicolas Petras on 06/06/2022.
//

#ifndef P11_BINARY_TREE_CLION_BINARYSEARCHTREE_H
#define P11_BINARY_TREE_CLION_BINARYSEARCHTREE_H


#include "Node.h"

template<typename T>
class BinarySearchTree {
    Node<T>* root;

    // utility (private) methods
    void printInOrderHelper(Node<T> *currRoot);
    void insertNode(Node<T>* nodeToAdd,  Node<T>* root);
    static Node<T>* createNode(T value);

public:
    BinarySearchTree();
    ~BinarySearchTree();
    void insert(T value);
    void printInOrder();
};

#endif //P11_BINARY_TREE_CLION_BINARYSEARCHTREE_H

//
// Created by Nicolas Petras on 06/06/2022.
//

#include <iostream>
#include "BinarySearchTree.h"

template<typename T>
BinarySearchTree<T>::BinarySearchTree() {
    this->root = nullptr;
}
template<typename T>
BinarySearchTree<T>::~BinarySearchTree() {
    delete this->root;
}

template<typename T>
Node<T>* BinarySearchTree<T>::createNode(T value) {
    return new Node<T>(value, nullptr, nullptr);
}

template<typename T>
void BinarySearchTree<T>::insert(T value) {
    Node<T>* newNode = createNode(value);
    insertNode(newNode, root);
}

template<typename T>
void BinarySearchTree<T>::insertNode(Node<T>* nodeToAdd, Node<T>* currRoot) {
    if (this->root == nullptr) {
      this->root = nodeToAdd;
    } else if (currRoot->getLeft() == nullptr && currRoot->getValue() <= nodeToAdd->getValue()) {
        currRoot->setLeft(nodeToAdd);
        return;
    } else if (currRoot->getRight() == nullptr && currRoot->getValue() > nodeToAdd->getValue()) {
        currRoot->setRight(nodeToAdd);
        return;
    } else {

        if (currRoot->getLeft() != nullptr) {                       // search left subtree
            insertNode(nodeToAdd, currRoot->getLeft());
        } else if (currRoot->getRight() != nullptr) {               // search right subtree
            insertNode(nodeToAdd, currRoot->getRight());
        }
    }
}

template<typename T>
void BinarySearchTree<T>::printInOrder() {
    if (root == nullptr) {
        std::cout << "Empty Tree" << std::endl;
        return;
    }
    printInOrderHelper(root);
}

template<typename T>
void BinarySearchTree<T>::printInOrderHelper(Node<T>* currRoot) {
    if (currRoot == nullptr) {
        return;
    }
    printInOrderHelper(currRoot->getLeft());
    std::cout << currRoot->getValue() << " ";
    printInOrderHelper(currRoot->getRight());
}
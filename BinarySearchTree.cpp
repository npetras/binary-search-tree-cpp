//
// Created by Nicolas Petras on 06/06/2022.
//

#include <iostream>
#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree() {
    root = nullptr;
}

BinarySearchTree::~BinarySearchTree() {
    delete root;
}

Node* BinarySearchTree::createNode(int value) {
    return new Node(value, nullptr, nullptr);
}

void BinarySearchTree::insert(int value) {
    Node* newNode = createNode(value);
    insertNode(newNode, root);
}

void BinarySearchTree::insertNode(Node *nodeToAdd, Node* currRoot) {
    if (this->root == nullptr) {
      this->root = nodeToAdd;
    } else if (currRoot->getLeft() == nullptr && currRoot->getValue() < nodeToAdd->getValue()) {
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

void BinarySearchTree::printInOrder() {
    if (root == nullptr) {
        std::cout << "Empty Tree" << std::endl;
        return;
    }
    printInOrderHelper(root);
}

void BinarySearchTree::printInOrderHelper(Node* currRoot) {
    if (currRoot == nullptr) {
        return;
    }
    printInOrderHelper(currRoot->getLeft());
    std::cout << currRoot->getValue() << " ";
    printInOrderHelper(currRoot->getRight());
}
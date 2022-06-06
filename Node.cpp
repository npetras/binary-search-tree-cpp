//
// Created by Nicolas Petras on 06/06/2022.
//

#include "Node.h"

template<typename T>
Node<T>::Node(T value, Node *left, Node *right) {
    this->value = value;
    this->left = left;
    this->right = right;
}

Node<T>::~Node() {
    delete left;
    delete right;
}

int Node::getValue() const {
    return value;
}

void Node::setValue(int value) {
    Node::value = value;
}

Node *Node::getLeft() const {
    return left;
}

void Node::setLeft(Node *left) {
    Node::left = left;
}

Node *Node::getRight() const {
    return right;
}

void Node::setRight(Node *right) {
    Node::right = right;
}



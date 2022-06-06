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

template<typename T>
Node<T>::~Node() {
    delete left;
    delete right;
}

template<typename T>
int Node<T>::getValue() const {
    return value;
}

template<typename T>
void Node<T>::setValue(int value) {
    Node::value = value;
}

template<typename T>
Node<T>* Node<T>::getLeft() const {
    return left;
}

template<typename T>
void Node<T>::setLeft(Node *left) {
    Node::left = left;
}
template<typename T>
Node<T>* Node<T>::getRight() const {
    return right;
}

template<typename T>
void Node<T>::setRight(Node *right) {
    Node::right = right;
}



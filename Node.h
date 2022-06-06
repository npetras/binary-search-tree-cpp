//
// Created by Nicolas Petras on 06/06/2022.
//

#ifndef P11_BINARY_TREE_CLION_NODE_H
#define P11_BINARY_TREE_CLION_NODE_H

template<typename T>
class Node {
    T value;
    Node* left;
    Node* right;
public:
    Node(T value, Node* left, Node* right);

    int getValue() const;

    void setValue(int value);

    Node *getLeft() const;

    void setLeft(Node *left);

    Node *getRight() const;

    void setRight(Node *right);

    virtual ~Node();
};

#endif //P11_BINARY_TREE_CLION_NODE_H

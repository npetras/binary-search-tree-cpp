#include <iostream>
#include "BinarySearchTree.h"

int main() {
    BinarySearchTree bst;

    bst.insert(111);
    bst.insert(22);
    bst.insert(24);
    bst.printInOrder();
}

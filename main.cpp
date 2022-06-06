#include <iostream>
#include "BinarySearchTree.h"

int main() {
    BinarySearchTree<int> intBst;
    BinarySearchTree<std::string> stringBst;

    intBst.insert(111);
    intBst.insert(22);
    intBst.insert(24);
    intBst.printInOrder();

    stringBst.insert("pet");
    stringBst.insert("hot");
    stringBst.insert("alp");


}

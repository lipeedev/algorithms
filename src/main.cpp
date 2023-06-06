#include "../include/binarysearchtree.h"
#include <iostream>

int main() {

  srand(77);
  BinarySearchTree tree;

  for (std::size_t i{0}; i < 15; ++i) {
    tree.insert(rand() % 100);
  }

  tree.inorder_traversal(
      [](TreeNode<int> *node) { std::cout << node->data << ' '; });

  std::cout << "\nheight: " << tree.height() << ' ';

  return 0;
}

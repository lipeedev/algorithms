#include "../include/binarysearchtree.h"
#include <iostream>
#include <vector>

int main() {

  BinarySearchTree tree;
  std::vector<int> numbers{61, 89, 66, 43, 51, 16, 55, 11, 79, 77, 82, 32};

  for (int &number : numbers) {
    tree.insert(number);
  }

  tree.levelorder_traversal(
      [](TreeNode<int> *node) { std::cout << node->data << ' '; });

  return 0;
}

#include "../include/binarysearchtree.h"
#include <iostream>
#include <vector>

int main() {

  srand(77);
  BinarySearchTree tree;

  for (std::size_t i{0}; i < 15; ++i) {
    tree.insert(rand() % 100);
  }

  tree.inorder_traversal(
      [](TreeNode<int> *node) { std::cout << node->data << ' '; });

  std::cout << "\nheight: " << tree.height() << "\n\n";

  std::vector<int> numbers_to_search{1, 2, 80, 54, 0, 11};

  for (int &number : numbers_to_search) {
    BinarySearchTree *result{tree.search(number)};

    if (result) {
      std::cout << result->root->data << ": found\n";
    } else {
      std::cout << number << ": not found\n";
    }

    delete result;
  }

  return 0;
}

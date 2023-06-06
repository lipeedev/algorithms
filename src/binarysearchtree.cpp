#include "../include/binarysearchtree.h"

BinarySearchTree::BinarySearchTree() : BinaryTree<int>{} {}

BinarySearchTree::BinarySearchTree(TreeNode<int> *node)
    : BinaryTree<int>{node} {}

void BinarySearchTree::insert(int value) {
  TreeNode<int> *parent{this->root};
  bool is_empty_node{false};

  if (!parent) {
    is_empty_node = true;
  }

  while (!is_empty_node) {
    if (value < parent->data && parent->left) {
      parent = parent->left;
    } else if (value >= parent->data && parent->right) {
      parent = parent->right;
    } else {
      is_empty_node = true;
    }
  }

  TreeNode<int> *node{new TreeNode<int>(value)};

  if (parent == nullptr) {
    this->root = node;
  } else if (value < parent->data) {
    parent->left = node;
  } else {
    parent->right = node;
  }
}

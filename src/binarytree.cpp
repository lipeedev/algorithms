#include "../include/binarytree.h"
#include <iostream>

template <typename T>
TreeNode<T>::TreeNode(T data) : data(data), right(nullptr), left(nullptr) {}

template <class T> BinaryTree<T>::BinaryTree() { this->root = nullptr; }

template <class T> BinaryTree<T>::BinaryTree(TreeNode<T> *node) : root(node) {}

template <class T> void BinaryTree<T>::inorder_traversal(TreeNode<T> *node) {

  if (node->left) {
    this->inorder_traversal(node->left);
  }

  std::cout << node->data << ' ';

  if (node->right) {
    this->inorder_traversal(node->right);
  }
}

template <class T> void BinaryTree<T>::inorder_traversal() {
  this->inorder_traversal(this->root);
}

template struct TreeNode<char>;
template struct TreeNode<int>;
template struct TreeNode<std::string>;

template class BinaryTree<int>;
template class BinaryTree<char>;
template class BinaryTree<std::string>;

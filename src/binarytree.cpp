#include "../include/binarytree.h"
#include <iostream>
#include <string>

template <typename T>
TreeNode<T>::TreeNode(T data) : data(data), right(nullptr), left(nullptr) {}

template <class T> BinaryTree<T>::BinaryTree() { this->root = nullptr; }
template <class T> BinaryTree<T>::BinaryTree(TreeNode<T> *node) : root(node) {}
template <class T> BinaryTree<T>::~BinaryTree() {
  this->postorder_traversal([](TreeNode<T> *node) {
    if (node) {
      delete node->right;
      delete node->left;
      node->left = nullptr;
      node->right = nullptr;
    }
  });
}

template <class T>
void BinaryTree<T>::inorder_traversal(
    TreeNode<T> *node, const std::function<void(TreeNode<T> *)> &callback) {

  if (node->left) {
    this->inorder_traversal(node->left, callback);
  }

  callback(node);

  if (node->right) {
    this->inorder_traversal(node->right, callback);
  }
}

template <class T>
void BinaryTree<T>::inorder_traversal(
    const std::function<void(TreeNode<T> *)> &callback) {
  this->inorder_traversal(this->root, callback);
}

template <class T> int BinaryTree<T>::height(TreeNode<T> *node) {
  int height_left{0};
  int height_right{0};

  if (node->left) {
    height_left = this->height(node->left);
  }

  if (node->right) {
    height_right = this->height(node->right);
  }

  if (height_right > height_left) {
    return height_right + 1;
  }

  return height_left + 1;
}

template <class T> int BinaryTree<T>::height() {
  return this->height(this->root);
}

template <class T>
void BinaryTree<T>::postorder_traversal(
    TreeNode<T> *node, const std::function<void(TreeNode<T> *)> &callback) {

  if (node->left) {
    this->postorder_traversal(node->left, callback);
  }

  if (node->right) {
    this->postorder_traversal(node->right, callback);
  }

  callback(node);
}

template <class T>
void BinaryTree<T>::postorder_traversal(
    const std::function<void(TreeNode<T> *)> &callback) {
  this->postorder_traversal(this->root, callback);
}

template struct TreeNode<char>;
template struct TreeNode<int>;
template struct TreeNode<std::string>;

template class BinaryTree<int>;
template class BinaryTree<char>;
template class BinaryTree<std::string>;

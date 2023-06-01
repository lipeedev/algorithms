#pragma once

template <typename T> struct TreeNode {
  TreeNode<T> *left;
  TreeNode<T> *right;
  T data;

  TreeNode(T data);
};

template <class T> class BinaryTree {
private:
  TreeNode<T> *root;

public:
  BinaryTree();
  BinaryTree(TreeNode<T> *node);
  virtual ~BinaryTree() {}

  void inorder_traversal(TreeNode<T> *node);
  void inorder_traversal();
};

#pragma once
#include <functional>

template <typename T> struct TreeNode {
  TreeNode<T> *left;
  TreeNode<T> *right;
  T data;

  TreeNode(T data);
};

template <class T> class BinaryTree {
public:
  TreeNode<T> *root;
  BinaryTree();
  BinaryTree(TreeNode<T> *node);
  ~BinaryTree();

  void inorder_traversal(TreeNode<T> *node,
                         const std::function<void(TreeNode<T> *)> &callback);
  void inorder_traversal(const std::function<void(TreeNode<T> *)> &callback);

  void postorder_traversal(TreeNode<T> *node,
                           const std::function<void(TreeNode<T> *)> &callback);
  void postorder_traversal(const std::function<void(TreeNode<T> *)> &callback);

  int height(TreeNode<T> *node);
  int height();
};

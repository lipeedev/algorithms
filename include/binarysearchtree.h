#pragma once
#include "binarytree.h"

class BinarySearchTree : public BinaryTree<int> {
public:
  BinarySearchTree();
  BinarySearchTree(TreeNode<int> *node);
  virtual ~BinarySearchTree() {}

  void insert(int value);
  BinarySearchTree *search(int value);

private:
  BinarySearchTree *search(int value, TreeNode<int> *node);
};

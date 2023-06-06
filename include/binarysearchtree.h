#pragma once
#include "binarytree.h"

class BinarySearchTree : public BinaryTree<int> {
public:
  BinarySearchTree();
  BinarySearchTree(TreeNode<int> *node);
  virtual ~BinarySearchTree() {}

  void insert(int value);
};

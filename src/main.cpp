#include "../include/binarytree.h"
#include <iostream>

int main() {

  TreeNode<char> n1('p');
  TreeNode<char> n2('e');
  TreeNode<char> n3('e');
  TreeNode<char> n4('l');
  TreeNode<char> n5('2');
  TreeNode<char> n6('1');
  TreeNode<char> n7('3');

  n1.left = &n2;
  n1.right = &n5;

  n2.left = &n4;
  n2.right = &n3;

  n5.left = &n6;
  n5.right = &n7;

  /*
            'p'
          /    \
      'e'     '2'
      / \     / \
    'l' 'e' '1' '3'

  */

  BinaryTree<char> tree(&n1);
  tree.inorder_traversal();

  return 0;
}

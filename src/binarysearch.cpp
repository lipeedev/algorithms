#include "../include/binarysearch.h"
#include <iostream>

int binarysearch(std::vector<int> &list, int left_position, int right_position,
                 int value_to_be_found) {

  if (right_position >= left_position) {

    int mid_index{left_position + (right_position - left_position) / 2};

    if (list.at(mid_index) == value_to_be_found) {
      return mid_index;
    }

    if (list.at(mid_index) > value_to_be_found) {
      return binarysearch(list, left_position, mid_index - 1,
                          value_to_be_found);
    }

    if (list.at(mid_index) < value_to_be_found) {
      return binarysearch(list, mid_index + 1, right_position,
                          value_to_be_found);
    }
  }

  return -1;
}

int binarysearch(std::vector<int> &list, int value_to_be_found) {
  return binarysearch(list, 0, list.size() - 1, value_to_be_found);
}

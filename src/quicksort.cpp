#include "../include/quicksort.h"

void swap(std::vector<int> &list, int first_index, int second_index) {
  int temporary_recipient{list.at(first_index)};
  list.at(first_index) = list.at(second_index);
  list.at(second_index) = temporary_recipient;
}

int partition(std::vector<int> &list, int low_index, int high_index,
              int pivot) {
  int left_pointer{low_index};
  int right_pointer{high_index};

  while (left_pointer < right_pointer) {
    while (list.at(left_pointer) <= pivot && left_pointer < right_pointer) {
      ++left_pointer;
    }

    while (list.at(right_pointer) >= pivot && left_pointer < right_pointer) {
      --right_pointer;
    }

    swap(list, left_pointer, right_pointer);
  }

  swap(list, left_pointer, high_index);
  return left_pointer;
}

void quicksort(std::vector<int> &list, int low_index, int high_index) {
  if (low_index >= high_index) {
    return;
  }

  int pivot{list.at(high_index)};
  int left_pointer{partition(list, low_index, high_index, pivot)};

  quicksort(list, low_index, left_pointer - 1);
  quicksort(list, left_pointer + 1, high_index);
}

void quicksort(std::vector<int> &list) { quicksort(list, 0, list.size() - 1); }

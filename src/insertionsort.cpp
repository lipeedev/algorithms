#include "../include/insertionsort.h"

void insertion_sort(std::vector<int> &list) {
  for (std::size_t i{1}; i < list.size(); ++i) {
    int current_value{list.at(i)};
    int previous_index{(int)i - 1};

    while (previous_index >= 0 && list.at(previous_index) > current_value) {
      list.at(previous_index + 1) = list.at(previous_index);
      --previous_index;
    }

    list.at(previous_index + 1) = current_value;
  }
}

#pragma once
#include <vector>

void swap(std::vector<int> &list, int first_index, int second_index);
int partition(std::vector<int> &list, int low_index, int high_index, int pivot);
void quicksort(std::vector<int> &list, int low_index, int high_index);
void quicksort(std::vector<int> &list);

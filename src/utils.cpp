#include "../include/utils.h"
#include <iostream>

void print_vector(std::vector<int> &vector) {
  std::cout << '[';

  for (int &element : vector) {
    std::cout << element << ", ";
  }

  std::cout << "]\n";
}

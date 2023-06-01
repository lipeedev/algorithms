#pragma once
#include <iostream>
#include <vector>

template <typename T> void print_vector(std::vector<T> &vector) {
  std::cout << '[';

  for (T &element : vector) {
    std::cout << element << ", ";
  }

  std::cout << "]\n";
}

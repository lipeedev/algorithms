#include "../include/quicksort.h"
#include "../include/utils.h"
#include <iostream>

int main() {

  srand((unsigned int)time(NULL));
  std::vector<int> list(100000); // test with 100K values

  for (std::size_t i{0}; i < list.size(); ++i) {
    int random_number{rand() % 50};
    list.at(i) = random_number;
  }

  std::cout << "before: ";
  print_vector(list);

  quicksort(list);

  std::cout << "after: ";
  print_vector(list);

  return 0;
}

#include "../include/binarysearch.h"
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

  quicksort(list);

  int value{41};
  int index_of_value{binarysearch(list, value)};

  std::cout << "sorted list: ";
  print_vector(list);
  std::cout << "index of value " << value << ": " << index_of_value << '\n';
  std::cout << list.at(index_of_value);

  return 0;
}

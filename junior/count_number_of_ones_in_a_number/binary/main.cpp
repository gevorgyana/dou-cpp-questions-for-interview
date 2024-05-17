#include <iostream>

int main() {
  unsigned int n = 2;
  int number_of_ones = 0;
  for (int i = 0; i < 32; ++i) {
    if (n & (1 << i)) {
      number_of_ones += 1;
      std::cout << "1";
    } else {
      std::cout << "0";
    }
    std::cout << std::endl;
  }
  std::cout << n << std::endl;
  std::cout << number_of_ones << std::endl;
  return 0;
}

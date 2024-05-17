#include <iostream>

int main() {
  int n = 100100;
  int sum_of_ones_in_decimal_number = 0;
  while (n / 10 or n % 10 == 1) {
    if (n % 10 == 1) {
      sum_of_ones_in_decimal_number += 1;
    }
    std::cout << n % 10 << std::endl;
    n = n / 10;
  }
  std::cout << sum_of_ones_in_decimal_number << std::endl;
  return 0;
}

#include <iostream>
#include <cmath>

int main() {
  std::string n_string;
  std::cin >> n_string;
  // n can be '10002' e. g.
  for (int i = 0; i < n_string.size(); ++i) {
    // assert(n_string[i] <= '9' and n_string[i] >= '0');
    ;
  }

  int n_len = n_string.size();
  int accum = 0;
  for (int i = 0; i <n_string.size(); ++i) {
    int digit = (n_string[i] - '0');
    int power = (n_string.size() - i - 1);
    int value_to_add = digit * (pow(10,power));
    accum += value_to_add;
  }
  std::cout << accum << std::endl;
  return 0;
}

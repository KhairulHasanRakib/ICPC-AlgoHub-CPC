#include <iostream>

int hello() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    std::cout << "You entered: " << number << std::endl;
    hello();
    return 0;
}
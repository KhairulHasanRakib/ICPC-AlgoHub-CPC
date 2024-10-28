#include <iostream>

int hello()
{
  std::cout << "Hello, World!" << std::endl;
  return 0;
}

int news()
{
  int a = 5, b = -10, c = 15;

  if (a < 0 && (b > 0 || c > 0))
  {
    std::cout << "At least two values are positive." << std::endl;
  }
}
int main()
{
  news ();
  int number;
  std::cout << "Enter an integer: ";
  std::cin >> number;
  std::cout << "You entered: " << number << std::endl;
  hello();
  return 0;
}
#include <iostream>

int g = 100;
int main()
{
  int g = 10;
  int &f = g;

  std::cout << "Hello World" << std::endl;
  std::cout << ::g << std::endl;
  std::cout << f;

  return 0;
}

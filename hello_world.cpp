#include <cstdlib>
#include <iostream>

std::string message() {
  return "Hello, Danger world!";
}

int main() {
  std::cout << message() << std::endl;
  return EXIT_SUCCESS;
}

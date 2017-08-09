#include <cstdlib>
#include <iostream>
#include <vector>

std::vector<int> myVector();

std::string message() {
         return "Hello, Danger world!";
}

int main() {
  std::cout << message() << std::endl;

  std::vector< int  > v = myVector();
        return EXIT_SUCCESS;
}

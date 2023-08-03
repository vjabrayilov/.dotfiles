#include <iostream>
#include <vector>

int main() {

  std::vector<int> v{1, 2, 3, 4, 5, 6};
  std::cout << "Hello World!\n";
  for (auto el : v) {
    std::cout << el << " ";
  }
  std::cout << std::endl;
  return 0;
}

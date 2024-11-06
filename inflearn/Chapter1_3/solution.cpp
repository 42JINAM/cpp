#include <iostream>
#include <map>
#include <ostream>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
};

int main() {
  int x = 1;              // initialization
  x = x + 2;              // assignment
  std::cout << x << endl; // 3

  int y = x;
  std::cout << y << std::endl;     // 3
  std::cout << x + y << std::endl; // 6
  std::cout << x << endl;          // 3

  int z;
  cout << z << endl; // garbage
  return 0;
}

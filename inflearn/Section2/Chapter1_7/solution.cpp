#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
};

void doSomething(int x) {
  x = 123;
  cout << x << endl;
}

int main() {
  int x = 0;
  {
    // int x = 1;
    x = 42;
    std::cout << &x << x << endl;
  }
  {
    int x = 2;
    std::cout << &x << x << endl;
  }
  std::cout << &x << x << endl;
  doSomething(x);
  std::cout << &x << x << endl;
}

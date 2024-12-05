#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
};

int add(int a, int b) { return a + b; }

int main() {
  int x = 5;
  int y = ++x;

  cout << y << endl;
  int z = x--;
  cout << z << endl;

  int a = 6, b = 6;
  cout << a << " " << b << endl;
  cout << ++a << " " << --b << endl; // 7, 5;

  int aa = 6, bb = 6;
  cout << aa << " " << bb << endl;
  cout << aa++ << " " << bb-- << endl; // 7, 5;

  // ub
  int c = 2;
  cout << add(c, ++c) << endl; // 4 ??
  c = c++;

  return 0;
}

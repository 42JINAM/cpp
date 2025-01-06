#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
};

int main() {
  int x = 7;
  int y = 4;

  cout << x / y << endl;
  cout << x / float(y) << endl;

  //
  cout << -5 / 2 << endl;
  cout << -5 % 2 << endl; // left
  //
  int z = x;
  z += y;

  return 0;
}

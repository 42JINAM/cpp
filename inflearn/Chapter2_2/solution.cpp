#include <cmath>
#include <iostream>
#include <limits>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
};

int main() {
  int i = 1;
  short s = 1;
  long l = 1;
  long long ll = 1;

  cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
  cout << std::numeric_limits<short>::max() << endl;
  cout << std::pow(2, sizeof(int) * 8 - 1) - 1 << endl;
  cout << sizeof(long) << endl;
  cout << sizeof(long long) << endl;

  s = 32767;

  s += 1;

  cout << s << endl;

  unsigned int ui = -1;
  cout << ui << endl;
}

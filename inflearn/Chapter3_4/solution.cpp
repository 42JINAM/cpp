#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
};

void test() {
  int x = 5;

  cout << ((x % 2 == 0) ? "even" : "odd") << endl;
}

int main() {
  int a;
  cout << sizeof a;
  cout << sizeof(a);
  // comma operator
  int x = 3;
  int y = 10;
  int z = (++x, ++y);
  ++x;
  ++y;
  int k = y;

  cout << z << endl;

  int aa = 1, bb = 10;
  int zz;

  zz = aa, bb; // (zz = aa), b;
  zz = (aa++, aa + bb);
  cout << zz << endl;
  // conditional operator arithmetric if
  bool onSale = true;
  const int price = (onSale == true) ? 10 : 100;
}

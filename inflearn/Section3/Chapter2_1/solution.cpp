#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
};

int main() {

  bool bValue = false;
  cout << (bValue ? "true" : "false") << endl;

  char chValue = 65;
  float fValue = 3.141592f;
  double dValue = 3.141592;
  cout << (int)chValue << endl;
  cout << chValue << endl;
  cout << fValue << endl;
  cout << dValue << endl;

  auto aValue = 3.141592;
  auto aValue2 = 3.141592f;
  cout << sizeof(aValue) << endl;
  cout << sizeof(aValue2) << endl;

  int a(123); // direct initialization;
  int b{123}; // uniform initialization;
}

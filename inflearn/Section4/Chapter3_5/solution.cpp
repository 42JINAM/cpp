#include <cstdlib>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
};

void doubleTest() {
  double d1(100 - 99.99);
  double d2(10 - 9.99);

  if (d1 == d2)
    cout << "equal" << endl;
  else {
    cout << "not equal" << endl;
    if (d1 > d2)
      cout << " d1 > d2" << endl;
    else
      cout << " d1 < d2" << endl;
  }
  cout << d1 - d2 << endl;
}

void solveDoubleTest() {
  double d1(100 - 99.99);
  double d2(10 - 9.99);
  const double epsilon = 1e-10;

  if (abs(d1 - d2) < epsilon)
    cout << "Approximately equal" << endl;
  else
    cout << "not equal" << endl;
}

void intTest() {

  int x, y;
  cin >> x >> y;
  cout << "your input values are : " << x << " " << y << endl;

  if (x == y)
    cout << "equal" << endl;
  if (x != y)
    cout << "not equal" << endl;
  if (x > y)
    cout << "x is greater than y" << endl;
  if (x < y)
    cout << "x is less than y" << endl;
  if (x >= y)
    cout << "x is greater than y or equal to y" << endl;
  if (x <= y)
    cout << "x is less than y or equal to y" << endl;
}

int main() {
  doubleTest();
  solveDoubleTest();
  return 0;
}

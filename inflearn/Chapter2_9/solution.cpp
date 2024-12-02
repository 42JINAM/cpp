#include "MY_CONSTANTS.h"
#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
};

void printNumber(const int my_number) {
  int n = my_number;
  cout << n << endl;
}

int const_exer1() {
  const double gravity{9.8}; // compile time
  constexpr int my_const(123);

  int number;

  cin >> number;

  const int special_number(number); // run time

  printNumber(123);

  int num_item = 123;
  const int price_per_item = 30;
  // int price = num_item * 30;
  int price = num_item * price_per_item;

  return 0;
}

int main() {
  double radius;
  cin >> radius;
  double circumference = 2.0 * radius * constants::pi;
}

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
};

int main() {

  int apple = 5;
  {
    int apple = 1;
    cout << apple << endl;
  }
  cout << apple << endl;
  // :: scope resolution operator
}

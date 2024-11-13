#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace MySpace1 {
namespace Innerspace {
int doSomething(int a, int b) { return a + b; }

} // namespace Innerspace

} // namespace MySpace1

namespace MySpace2 {
int doSomething(int a, int b) { return a * b; }

} // namespace MySpace2

class Solution {
public:
  // Write your solution here
};

int main() {
  using namespace MySpace1;
  cout << MySpace1::Innerspace::doSomething(3, 4) << endl;
  cout << MySpace2::doSomething(3, 4) << endl;
}

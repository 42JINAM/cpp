#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
};

namespace a {

int var;

}

namespace b {

int var;

}

int main() {
  {
    using namespace a;
    cout << var << endl;
  }
  {
    using namespace b;
    cout << var << endl;
  }
}

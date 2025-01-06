#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
  // Write your solution here
};

void test_not(int x, int y){
  if (!(x == y)) {
    cout << " x does not equall y" << endl;
  } else {
    cout << " x equals y" << endl;
  }
}

void test_or(){
  int v = 1;
  if (v==0|| v == 1){
    cout << "v is 0 or 1" << endl;
  }
}

void short_circuit_evaluation(void){
  int x = 2;
  int y = 2;
  if (x == 1 && y++== 2){
    //do_something
  }
  cout << y << endl; //2

}

bool test_xor(bool x, bool y){
  //f f f
  //f t t
  //t f t
  //t t f
  return (x != y);
}

// (true && true) || false - true
// (false && true) || true - true
// (false && true) || false || true - true
// (14 > 13 || 2 > 1) && (9 > 1) true
// !(2314123 > 2 || 123123 > 2387) false
int main() {
  bool x = true;

  cout << !x << endl;
  // logical and
  bool y= false;

  cout << (x&&y) << endl;

  bool hit = true;
  int health = 10;
  
  if (hit && health <= 20){
    cout << "DIED" << endl;
  } else {
    health -= 20;
  }

  // De Morgan's Law 
  // !(x || y) == !x && !y


} 

#include <iostream>
#include <map>
#include <vector>

using namespace std;
#define MY_NUMBER "Hello, world"
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define LIKE_APPLE
#define LIKE_PEACH
void doSomething(void);
int main() {
  cout << MY_NUMBER << endl;
  cout << MAX(1, 2) << endl;
#ifdef LIKE_APPLE
  cout << "Apple " << endl;
#endif

#ifndef LIKE_APPLE
  cout << "Orange" << endl;
#endif
  doSomething();
  return 0;
}

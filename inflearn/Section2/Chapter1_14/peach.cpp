#include <iostream>

using namespace std;

void doSomething(void) {
#ifdef LIKE_PEACH
  cout << "Peach" << endl;
#endif

#ifndef LIKE_PEACH
  cout << "Orange" << endl;
#endif
}

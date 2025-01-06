#include <iostream>
#include <vector>
#include <map>
#include "myConst.hpp"

using namespace std;
static int value = 123;

class Solution {
public:
  // Write your solution here
};

void doSomething(){
	static int a = 1; //static memory
	a ++;
	cout << a << endl;
}

int main() {
	cout << value << endl;
	int value = 1;
	cout << ::value << endl;
	cout << value << endl;

	doSomething();



}

#include <iomanip>
#include <iostream>
#include <vector>
#include <map>
#include <typeinfo>

using namespace std;

class Solution {
public:
  // Write your solution here
};

int main() {
	float a = 1.0f;
	double b = a; //numeric promotion
	
	//umeric conversion
	double d = 3;
	short s = 2; // int - short
	
	int i = 30000;
	char c = i;
	cout << static_cast<int>(c) << endl;

	d = 0.123456789;
	float f = d;

	cout << std::setprecision(12) << f << endl;

	cout << 5u - 10;

	int i2 = 4.0;
	int i3 = int(4.0);
	int i4 = static_cast<int>(4.0);

}

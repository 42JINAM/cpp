#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <limits>

using namespace std;

class Solution {
public:
  // Write your solution here
};

void yourName(){
	cout << "Your age ?" << endl;
	int age;
	// getline(std::cin, age);
	cin >> age;
	std::cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Your name ?" << endl;
	string name;

	// cin >> name;
	getline(std::cin, name);

	cout << name << " " << age << endl;
}

string addString(string a, string b){
	return a + b;
}

int main() {
	// yourName();
	cout << addString("hello", "world") << endl;
	cout << addString("hello", "world").length() << endl;

}

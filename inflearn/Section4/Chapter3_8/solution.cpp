#include <bitset>
#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
  // Write your solution here
};

void shiftLeft(){
	unsigned int a = 3;
	cout << bitset<4>(a) << " " << a << endl;

	unsigned int b = a << 3;
	cout << bitset<4>(b) << " " << b << endl;



}

void shiftRight(){
	unsigned int a = 1024;
	cout << bitset<4>(a) << " " << a << endl;

	unsigned int b = a >> 3;
	cout << bitset<4>(b) << " " << b << endl;


}

void bitwiseNot(){
	unsigned int a = 1024;
	cout << bitset<4>(~a) << " " << ~a << endl;


}

void bitwiseAndOr(){
	unsigned int a = 0b1100;
	unsigned int b = 0b0110;
	
	cout << a << " " << b << endl; 
	cout << bitset<4>(a & b) << endl;
	cout << bitset<4>(a | b) << endl;
	cout << bitset<4>(a ^ b) << endl;

}


void	quiz(){
	unsigned int a = 0b0110;
	cout << "quiz" << endl;
	cout << bitset<4>(a >> 2) << endl; // 0001
	cout << bitset<4>( 5 | 12) << endl; // 0101 | 1100 1101
	cout << bitset<4>( 5 & 12) << endl; // 0100
	cout << bitset<4>( 5 ^ 12) << endl; // 1001
	
	
}

int main() {
	// << left 
	shiftLeft();
	// >> right
	shiftRight();
	// ~ & | ^
	bitwiseNot();	
	bitwiseAndOr();
	quiz();
}

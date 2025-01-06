#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
  // Write your solution here
};

void printItems(unsigned char &items){
	cout << bitset<8>(items) << endl;

}

void gainOpt(unsigned char &items, const unsigned char opt){
	items = items | opt;
}
void loseOpt(unsigned char &items, const unsigned char opt){
	items = items &~opt;
}

bool hasItem(unsigned char &items, const unsigned char opt){
	return items & opt;
}

void event1(unsigned char &items){
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2= 1 << 2 ;

	if ((items & opt2) && !(items & opt1)){
		items ^= (opt2 | opt1);
		// items ^= opt1;
	}

}

void showColorCodes(unsigned pixelColor){
	const unsigned int red = 0xFF0000;
	const unsigned int green = 0x00FF00;
	const unsigned int blue = 0x0000FF;

	unsigned char b = pixelColor & blue;
	cout << "blue : " << bitset<8>(b) << " >> " << int(b) << endl;


	unsigned char g = (pixelColor & green) >> 8;
	cout << "green : " << bitset<16>(g) << " " << int(g) << endl;

	unsigned char r = (pixelColor & red) >> 16;
	cout << "red : " << bitset<8>(r) << " " << int(r) << endl;

}


int main() {

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2= 1 << 2 ;
	const unsigned char opt3 = 1 << 3;
	const unsigned char opt4 = 1 << 4;
	unsigned char items = 0;
	printItems(items);
	gainOpt(items, opt0);
	printItems(items);
	gainOpt(items, opt3);
	printItems(items);
	loseOpt(items, opt3);
	printItems(items);
	cout <<hasItem(items, opt3) << endl;
	gainOpt(items, opt2 | opt3);
	printItems(items);
	cout <<hasItem(items, opt3) << endl;
	event1(items);
	printItems(items);

	// bit mask;
	showColorCodes(0xDAA520);
}

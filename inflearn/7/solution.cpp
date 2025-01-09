#include <iostream>
#include <vector>
#include <map>

using namespace std;

//user defined datatype
enum Color {
  COLOR_BLACK,
  COLOR_RED,
  COLOR_BLUE,
  COLOR_GREEN,
};

enum Feelings {
  HAPPY,
  JOY,
  TIRED,
  BLUE,
  
};
int computeDamage(int weapon_id){
  if (weapon_id == 0){
    return 1;
  }
  if (weapon_id == 1){
    return 2;
  }
}

class Solution {
public:
  // Write your solution here
};

int main() {
  Color paint = COLOR_BLACK;
  Color house(COLOR_BLUE);
  Color apple{COLOR_RED};

  cout << COLOR_BLACK << endl;
  cout << HAPPY << endl;

}

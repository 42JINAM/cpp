#include <algorithm>
#include <iostream>
#include <map>
#include <stdexcept>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
};
// call by value
double grade(double midterm, double final, double homework) {
  return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double median(vector<double> vec) {
  typedef vector<double>::size_type vec_size;
  vec_size size = vec.size();
  if (size == 0) {
    throw domain_error("median of an empty vector");
  }
  sort(vec.begin(), vec.end());
  vec_size mid = size / 2;
  return size % 2 == 0 ? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];
}

double grade(double midterm, double final, const vector<double> &hw) {
  if (hw.size() == 0) {
    throw domain_error("student has done no homework");
  }
  return (grade(midterm, final, median(hw)));
}
int main() {}
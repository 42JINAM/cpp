#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <istream>
#include <stdexcept>
#include <string>
#include <vector>
struct Student_info {
  std::string name;
  double midterm, final;
  std::vector<double> homework;
};

std::istream &read_hw(std::istream &in, std::vector<double> &hw) {
  if (in) {
    hw.clear();
    double x;
    while (in >> x) {
      hw.push_back(x);
    }
    in.clear();
  }
  return in;
}
std::istream &read(std::istream &is, Student_info &s) {
  is >> s.name >> s.midterm >> s.final;
  read_hw(is, s.homework);
  return is;
}

bool compare(const Student_info &x, const Student_info &y) {
  return x.name < y.name;
}

double grade(double midterm, double final, double homework) {
  return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}
double median(std::vector<double> vec) {
  typedef std::vector<double>::size_type vec_size;
  vec_size size = vec.size();
  if (size == 0) {
    throw std::domain_error("median of an empty vector");
  }
  std::sort(vec.begin(), vec.end());
  vec_size mid = size / 2;
  return size % 2 == 0 ? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];
}

double grade(double midterm, double final, const std::vector<double> &hw) {
  if (hw.size() == 0) {
    throw std::domain_error("student has done no homework");
  }
  return (grade(midterm, final, median(hw)));
}

double grade(const Student_info &s) {
  return grade(s.midterm, s.final, s.homework);
}

int main() {
  std::vector<Student_info> students;
  Student_info record;
  std::string::size_type maxlen = 0;

  while (read(std::cin, record)) {
    maxlen = std::max(maxlen, record.name.size());
    students.push_back(record);
  }
  sort(students.begin(), students.end(), compare);

  for (std::vector<Student_info>::size_type i = 0; i != students.size(); ++i) {
    std::cout << students[i].name
              << std::string(maxlen + 1 - students[i].name.size(), ' ');
    try {
      double final_grade = grade(students[i]);
      std::streamsize prec = std::cout.precision();
      std::cout << std::setprecision(3) << final_grade
                << std::setprecision(prec);
    } catch (std::domain_error e) {
      std::cout << e.what();
    }
    std::cout << std::endl;
  }
  return 0;
}

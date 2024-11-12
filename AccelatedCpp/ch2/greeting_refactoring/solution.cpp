/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinam <jinam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:27:51 by jinam             #+#    #+#             */
/*   Updated: 2024/10/30 16:48:43 by jinam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
};

void printGreeting(const std::string &greeting) {
  const int pad = 1;
  const int rows = pad * 2 + 3;
  const std::string::size_type cols = greeting.size() + pad * 2 + 2;

  std::cout << std::endl;

  int r = 0;

  while (r != rows) {
    std::cout << std::endl;
    std::string::size_type c = 0;
    while (c != cols) {
      if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
        std::cout << "*";
        c++;
      } else {
        if (r == pad + 1 && c == pad + 1) {
          std::cout << greeting;
          c += greeting.size();
        } else {
          std::cout << " ";
          c++;
        }
      }
    }
    ++r;
  }
}

void printGreetingRefactoring(const std::string str) {
  const int pad = 1;
  const int rows = pad * 2 + 3;
  const std::string::size_type cols = str.size() + pad * 2 + 2;

  std::cout << std::endl;

  //[0, rows)
  for (int r = 0; r != rows; ++r) {
    for (string::size_type c = 0; c != cols;) {
      if (r == pad + 1 && c == pad + 1) {
        cout << str;
        c += str.size();
      } else {
        if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
          cout << "*";
        } else {
          std::cout << " ";
        }
        ++c;
      }
    }
    std::cout << std::endl;
  }
}

int main() {
  std::cout << "Please enter your first name: ";

  std::string name;
  std::cin >> name;

  const std::string greeting = "Hello, " + name + "!";
  // printGreeting(greeting);
  printGreetingRefactoring(greeting);
  return 0;
}

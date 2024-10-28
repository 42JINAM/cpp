/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinam <jinam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:34:41 by jinam             #+#    #+#             */
/*   Updated: 2024/10/28 15:35:48 by jinam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  // Write your solution here
};

int main() {
  std::cout << "Please enter your first name : ";
  std::string name;
  std::cin >> name; // flushing buffer.
  // std::cout << "Hello, " << name << std::endl; // flusing buffer
  const std::string greeting = "Hello, " + name + "!";

  const std::string spaces(greeting.size(), ' ');
  const std::string second = "* " + spaces + " *";
  const std::string first(second.size(), '*');

  std::cout << std::endl;
  std::cout << first << std::endl;
  std::cout << second << std::endl;
  std::cout << "* " << greeting << " *" << std::endl;
  std::cout << second << std::endl;
  std::cout << first << std::endl;

  return 0;
}

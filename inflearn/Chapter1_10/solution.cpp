/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinam <jinam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:55:54 by jinam             #+#    #+#             */
/*   Updated: 2024/11/13 14:03:47 by jinam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

// prototype;
// forward declaration
int add(int a, int b);
int multiply(int a, int b);

int main() {
  cout << add(1, 2) << endl;
  cout << multiply(1, 2) << endl;
}

int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=562
//
// 10-11-2018 11:30: Verdict accepted

#include <iostream>
#include <string>

int main() {
	int n;
	std::string s;

	std::cin >> n;
	while (n--) {
		std::cin >> s;

		if (s == "1" || s == "4" || s == "78") {
			std::cout << '+' << std::endl;
		}
		else if (s.substr(s.size() - 2, 2) == "35") {
			std::cout << '-' << std::endl;
		}
		else if (s.front() == '9' && s.back() == '4') {
			std::cout << '*' << std::endl;
		}
		else if (s.substr(0, 3) == "190") {
			std::cout << "?" << std::endl;
		}
		else {
			std::cout << '+' << std::endl;
		}
	}
}
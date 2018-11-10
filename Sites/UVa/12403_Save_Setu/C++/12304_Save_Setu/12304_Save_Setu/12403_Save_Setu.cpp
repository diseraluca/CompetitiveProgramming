// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3834
//
// 10-11-2018 10:57: Verdict accepted

#include <iostream>
#include <string>

int main() {
	long donations{};
	int t{}, n{};
	std::string command{};

	std::cin >> t;
	while (t--) {
		std::cin >> command;

		if (command == "donate") {
			std::cin >> n;
			donations += n;
		}
		else {
			std::cout << donations << std::endl;
		}
	}
}
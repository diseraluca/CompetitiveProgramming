// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4022
//
// 10-11-2018 11:05: Verdict accepted

#include <iostream>
#include <string>

int main() {
	int counter{ 1 };
	std::string word{};

	while (std::cin >> word && word != "*") {
		std::cout << "Case " << counter++ << ": ";
		if (word == "Hajj") {
			std::cout << "Hajj-e-Akbar" << std::endl;
		}
		else {
			std::cout << "Hajj-e-Asghar" << std::endl;
		}
	}
}
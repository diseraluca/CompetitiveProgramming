// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=4&page=show_problem&problem=208
//
// 06-10-2018 11:03: Verdict accepted

#include <iostream>
#include <string>

int main() {
	int isClosing = 0;
	std::string mapping[2]{ "``", "''" };
	
	char c{};
	while (std::cin >> std::noskipws >> c) {
		if (c == '"') {
			std::cout << mapping[isClosing];
			isClosing ^= 1;
		}
		else {
			std::cout << c;
		}
	}

	return 0;
}
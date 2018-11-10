// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3710
//
// 11-09-2018 18:00: Verdict accepted

#include <iostream>
#include <string>

int main() {
	std::string word{};
	int t{};

	std::cin >> t;
	while (t--) {
		std::cin >> word;

		if (word.length() > 3) {
			std::cout << 3 << std::endl;
		}
		else if ((word[0] == 'o' && word[1] == 'n') || (word[1] == 'n' && word[2] == 'e') || (word[0] == 'o' && word[2] == 'e')) {
			std::cout << 1 << std::endl;
		}
		else {
			std::cout << 2 << std::endl;
		}
	}
}
// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2493
//
// 20-10-2018 23:07: Verdict accepted

#include <iostream>

int main() {
	int t{}, x, y, x1, y1;

	while (std::cin >> t && t) {
		std::cin >> x >> y;

		while (t--) {
			std::cin >> x1 >> y1;

			if (x1 < x && y1 < y) {
				std::cout << "SO" << std::endl;
			}
			else if (x1 > x && y1 < y) {
				std::cout << "SE" << std::endl;
			}
			else if (x1 > x && y1 > y) {
				std::cout << "NE" << std::endl;
			}
			else if (x1 < x && y1 > y) {
				std::cout << "NO" << std::endl;
			}
			else {
				std::cout << "divisa" << std::endl;
			}
		}
	}
}
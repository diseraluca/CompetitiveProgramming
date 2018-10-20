// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=22&page=show_problem&problem=1985
//
// 20-10-2018 21:30: Verdict accepted


#include <iostream>

int main() {
	int t, n, m;

	std::cin >> t;
	while (t--) {
		std::cin >> n >> m;

		std::cout << ((n / 3) * (m / 3)) << std::endl;
	}
}
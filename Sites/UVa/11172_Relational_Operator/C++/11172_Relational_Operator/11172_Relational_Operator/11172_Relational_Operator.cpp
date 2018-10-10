// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2113
//
// 10-10-2018 23:15: Verdict accepted

#include <iostream>

const char MAPPING[3]{ '=', '>', '<' };

int main() {
	int n{};

	std::cin >> n;

	int l{}, r{}, b{};
	for (int i{ 0 }; i < n; ++i, b = 0) {
		std::cin >> l >> r;

		(l == r || (++b && false)) || (l > r || ++b);
		std::cout << MAPPING[b] << std::endl;
	}
}
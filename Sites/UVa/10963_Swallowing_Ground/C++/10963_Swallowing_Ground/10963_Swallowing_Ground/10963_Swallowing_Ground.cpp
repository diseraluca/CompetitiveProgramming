// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1904
//
// 11-11-2018 20:24: Verdict accepted

#include <iostream>
#include <vector>
#include <algorithm>

int  main() {
	int tests{}, gapsCount{};
	std::pair<int, int> gaps{};

	std::cin >> tests;
	while (tests--) {
		std::cin >> std::ws;

		std::cin >> gapsCount;
		std::vector<int> deltas{};
		while (gapsCount--) {
			std::cin >> gaps.first >> gaps.second;

			deltas.push_back(gaps.first - gaps.second);
		}

		std::cout << (std::adjacent_find(deltas.begin(), deltas.end(), std::not_equal_to<int>()) == deltas.end() ? "yes" : "no") << (tests > 0 ? "\n" : "") << std::endl;
	}
}
// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2595
//
// 17-11-2018 11:16: Verdict accepted

#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>

constexpr int ONE_PLUS_MAX_COST{ (200 * 10000) + 1 };

int main() {
	int participants, budget, hotels, weeks, cost;
	std::vector<int> beds;

	while (std::cin >> participants >> budget >> hotels >> weeks) {
		int minCost{ ONE_PLUS_MAX_COST };
		beds.resize(weeks);
		while (hotels--) {
			std::cin >> cost;
			std::copy_n(std::istream_iterator<int>(std::cin), weeks, std::begin(beds));

			int totalCost{ cost*participants };
			if ((totalCost <= budget) && (std::any_of(std::begin(beds), std::end(beds), [participants](int bedCount) {return participants <= bedCount; }))) {
				if (totalCost < minCost) {
					minCost = totalCost;
				}
			}
		}

		if (minCost != ONE_PLUS_MAX_COST) {
			std::cout << minCost << std::endl;
		}
		else {
			std::cout << "stay home" << std::endl;
		}
	}
}
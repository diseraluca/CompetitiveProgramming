// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=17&page=show_problem&problem=1491
//
// 20-10-2018 17:26: Verdict accepted

#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

int main() {
	std::vector<int> lock{}; 
	lock.reserve(4);

	std::copy_n(std::istream_iterator<int>(std::cin), 4, std::back_inserter(lock));

	while (std::any_of(lock.begin(), lock.end(), [](const int n) { return n; })) {
		std::cout << 1080 + ((lock[0] - lock[1] + 40) % 40 + (lock[2] - lock[1] + 40) % 40 + (lock[2] - lock[3] + 40) % 40) * 9 << std::endl;

		std::copy_n(std::istream_iterator<int>(std::cin), 4, lock.begin());
	}
}
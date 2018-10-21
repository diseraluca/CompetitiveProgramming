// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3431
//
// 21-10-2018 15:20: Verdict accepted

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>

int main() {
	int n, c{ 1 };
	std::vector<int> vec{};

	while (std::cin >> n && n) {
		vec.resize(n);
		std::copy_n(std::istream_iterator<int>(std::cin), n, vec.begin());

		std::cout << "Case " << c++ << ": " << std::accumulate(vec.begin(), vec.end(), 0, [](const int sum, const int value) { return sum + (!!value) + (-1 * (!value)); }) << std::endl;
	}
}
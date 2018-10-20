// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2349
//
// 20-10-2018 15:46: Verdict accepted


#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>

int main() {
	int t, n, r{};
	std::vector<int> s{};

	std::cin >> t;
	for (int ti = 0; ti < t; ++ti, r = 0, s.clear()) {
		std::cin >> n;

		s.reserve(n);

		std::copy_n(std::istream_iterator<int>(std::cin), n, std::back_inserter(s));
		std::sort(s.begin(), s.end());
		for (int i = 0; i < n - 1; ++i) {
			r += s[i + 1] - s[i];
		}

		std::cout << r * 2 << std::endl;
	}
}
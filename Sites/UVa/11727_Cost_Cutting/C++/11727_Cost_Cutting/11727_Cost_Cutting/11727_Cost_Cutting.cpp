// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2827
//
// 20-10-2018 23:45: Verdict accepted

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
	int n;
	std::vector<int> s; s.resize(3);

	std::cin >> n;
	for (int i{ 1 }; i <= n; ++i) {
		std::copy_n(std::istream_iterator<int>(std::cin), 3, s.begin());
		std::sort(s.begin(), s.end());
		std::cout << "Case " << i << ": " << s[1] << std::endl;
	}
}
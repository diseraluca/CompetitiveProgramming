// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3794
//
// 10-11-2018 00:00: Verdict accepted


#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

int main() {
	int t{}, c{ 1 };
	int vec[3];

	std::cin >> t;
	while (t--) {
		std::copy_n(std::istream_iterator<int>(std::cin), 3, std::begin(vec));
		std::cout << "Case " << c++ << ": " << (std::any_of(std::begin(vec), std::end(vec), [](int value) {return value > 20; }) ? "bad" : "good") << std::endl;
	}
}
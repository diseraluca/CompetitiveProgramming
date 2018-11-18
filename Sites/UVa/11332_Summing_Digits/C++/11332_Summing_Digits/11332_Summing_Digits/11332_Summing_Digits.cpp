// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2307
//
// 11-11-2018 20:46: Verdict accepted


#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

unsigned long int sumDigits(unsigned long int n) {
	std::vector<unsigned long int> vec{};

	while (n) {
		vec.push_back(n % 10);
		n /= 10;
	}

	return std::accumulate(std::begin(vec), std::end(vec), 0ul);
}

int main() {
	unsigned long num{};

	while (std::cin >> num && num) {
		while (num > 9) {
			num = sumDigits(num);
		}

		std::cout << num << std::endl;
	}
}
// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2726
//
// 18-11-2018 14:18: Verdict accepted

#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>

int main() {
	int bankCount, debentureCount, debitor, creditor, amount;
	std::vector<int> bankReserve;

	while (std::cin >> bankCount >> debentureCount && bankCount && debentureCount) {
		bankReserve.resize(bankCount);
		std::copy_n(std::istream_iterator<int>(std::cin), bankCount, std::begin(bankReserve));

		while (debentureCount--) {
			std::cin >> debitor >> creditor >> amount;

			bankReserve[debitor - 1] -= amount;
			bankReserve[creditor - 1] += amount;
		}

		std::cout << (std::all_of(std::begin(bankReserve), std::end(bankReserve), [](int reserve) { return reserve >= 0; }) ? 'S' : 'N') << std::endl;
	}
}
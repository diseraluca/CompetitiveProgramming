// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=27&page=show_problem&problem=2542
//
// 20-10-2018 23:34: Verdict accepted

#include <iostream>

int main() {
	long t, n; std::cin >> t;  while (t--) { std::cin >> n; std::cout << (std::abs(((n * 567 / 9 + 7492) * 235 / 47 - 497)) / 10) % 10 << std::endl; }
}
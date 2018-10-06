// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
//
// 06-10-2018 11:29: Verdict accepted


#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

int main() {
	int length{}, count{0};
	std::vector<int> clouds{};

	std::cin >> length;
	clouds.reserve(length);

	std::copy_n(std::istream_iterator<int>(std::cin), length, std::back_inserter(clouds));
	for (int index{ 0 }; index < length - 3; ++index, ++count) {
		if (clouds[index + 2] == 0) { ++index; }
	}

	std::cout << ++count;
}
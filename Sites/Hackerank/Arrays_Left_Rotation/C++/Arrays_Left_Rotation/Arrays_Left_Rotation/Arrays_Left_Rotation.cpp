// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem
//
// 09-10-2018 16:43 : Verdict accepted


#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
	int size, rotations;
	std::cin >> size >> rotations;

	std::vector<int> arr{}; arr.reserve(size);
	std::copy_n(std::istream_iterator<int>(std::cin), size, back_inserter(arr));

	std::vector<int> nArr{}; nArr.resize(size);
	for (int i{ 0 }; i < size; ++i) {
		nArr[((i + (size - rotations)) % size)] = arr[i];
	}

	for (auto a : nArr) {
		std::cout << a << ' ';
	}
}
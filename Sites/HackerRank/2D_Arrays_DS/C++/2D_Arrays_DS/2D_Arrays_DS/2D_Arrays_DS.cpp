// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://www.hackerrank.com/challenges/2d-array/problem
//
// 09-10-2018 16:35 : Verdict accepted

#include <iostream>
#include <iterator>
#include <array>

const int MATRIX_SIZE{ 6 };
const int HOURGLASS_CENTER_MIN{ 1 };
constexpr int HOURGLASS_CENTER_MAX{ MATRIX_SIZE - 1 };

constexpr int MIN_SUM{ -9 * 7 };

int main() {
	std::array<std::array<int, MATRIX_SIZE>, MATRIX_SIZE> matrix{};

	for (int i{ 0 }; i < MATRIX_SIZE; ++i) {
		std::copy_n(std::istream_iterator<int>(std::cin), MATRIX_SIZE, matrix[i].begin());
	}

	for (auto a : matrix) {
		for (auto b : a) {
			std::cerr << b << ' ';
		}

		std::cerr << std::endl;
	}
	int max = MIN_SUM;
	for (int i{ HOURGLASS_CENTER_MIN }; i < HOURGLASS_CENTER_MAX; ++i) {
		for (int j{ HOURGLASS_CENTER_MIN }; j < HOURGLASS_CENTER_MAX; ++j) {
			int sum = matrix[i - 1][j] + matrix[i - 1][j - 1] + matrix[i - 1][j + 1] +
				matrix[i][j] +
				matrix[i + 1][j] + matrix[i + 1][j - 1] + matrix[i + 1][j + 1];

			if (sum > max) { max = sum; }
		}
	}

	std::cout << max;
}
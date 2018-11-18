// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1241
//
// 11-11-2018 19:45: Verdict accepted

#include <cstdio>

int main() {
	long c, f, s, a, t;

	std::scanf("%ld\n", &c);
	while (c--) {
		std::scanf("%ldn", &f);

		long b{ 0 };
		while (f--) {
			std::scanf("%ld %ld %ld\n", &s, &a, &t);

			b += s * t;
		}

		std::printf("%ld\n", b);
	}
}
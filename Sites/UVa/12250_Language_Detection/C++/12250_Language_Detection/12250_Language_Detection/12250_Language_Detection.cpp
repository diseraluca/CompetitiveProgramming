// Copyright 2018 Luca Di Sera
//		Contact: disera.luca@gmail.com
//				 https://github.com/diseraluca
//				 https://www.linkedin.com/in/luca-di-sera-200023167
//
// This code is licensed under the MIT License. 
// More informations can be found in the LICENSE file in the root folder of this repository
//
// Solution to: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3402
//
// 21-10-2018 14:10: Verdict accepted

#include <iostream>
#include <map>
#include <string>

const std::map<std::string, std::string> MAPPING{
	{ "CIAO", "ITALIAN"},
	{"HELLO", "ENGLISH"},
	{"HOLA", "SPANISH"},
	{"HALLO", "GERMAN"},
	{"BONJOUR", "FRENCH"},
	{"ZDRAVSTVUJTE", "RUSSIAN"}
};

int main() {
	int c{ 1 };
	std::string input{};

	while (std::cin >> input && input != "#") {
		std::cout << "Case " << c++ << ": ";
		if (MAPPING.find(input) != MAPPING.end()) {
			std::cout << MAPPING.at(input) << std::endl;
		}
		else {
			std::cout << "UNKNOWN" << std::endl;
		}
	}
}
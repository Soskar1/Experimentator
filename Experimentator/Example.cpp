#include <iostream>

#include "Experimentator.h"

int main() {
	int a = 5;

	double test = GetAverageExecutionTime([&a]() {
		int b = 54;
		int c = 36;

		return a + b + c;
		});

	std::cout << test << std::endl;

	return 0;
}
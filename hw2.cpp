#include "stdafx.h"
#include "iostream"
#include "stdarg.h"

int even_count(int N, int x, ...) {
	va_list args;
	va_start(args, x);
	int steps = 0, a = x;
	while (N--) {
		if (a % 2 == 0) ++steps;
		a = va_arg(args, int);
	}
	return steps;
}

float srednee(float x, ...) {
	va_list args;
	va_start(args, x);
	float a = x;
	float total = a;
	int steps = 1;
	while ((a = va_arg(args, int)) != -1) {
		total += a;
		++steps;
	}
	total = total / steps;
	va_end(args);
	return total;
}

int main()
{
	std::cout << srednee(2, 4, -1) << std::endl;
	std::cout << srednee(4, 5, 1, 3, 0, 6, 3, -1) << std::endl;

	std::cout << even_count(7, 1, 2, 3, 4, 3, 2, 1) << std::endl;
	//std::cout << even_count(10, 5, 8, 1, 3, 4, 9, 4, 7, 10, 18) << std::endl;

    return 0;
}
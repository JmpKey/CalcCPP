#include <iostream>
#include "Calc.h"

int main()
{
	double res;
	Calc instance;
	while (true)
	{
		double a;
		double b;
		char c;
		std::cin >> a >> c >> b;
		res = instance.Account(a, b, c);
		std::cout << "Answer: " << res;
	}
	return 0;
}
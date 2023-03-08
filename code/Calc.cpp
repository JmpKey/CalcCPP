#include "Calc.h"

double Calc::Account(double a, double b, char str)
{
	switch (str)
	{
		case '-': return a - b;
		case '+': return a + b;
		case '*': return a * b;
		case '/': return a / b;
	default:
		return 0.0;
	}
}
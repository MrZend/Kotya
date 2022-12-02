#include "Arithmetic.h"

Arithmetic::Arithmetic(double d, double firstElem) : Series(firstElem)
{
	this->d = d;
}

double Arithmetic::GetNum(int n)
{
	return firstElem + d * (n-1);
}

double Arithmetic::GetSum(int n)
{
	return ((firstElem + GetNum(n)) / 2) * n;
}

Arithmetic::~Arithmetic()
{
	std::cout << "\nArithmetic destructor..." << std::endl;
}
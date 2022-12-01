#include "Geometric.h"
#include <cmath>

Geometric::Geometric(double q, double firstElem) : Series(firstElem)
{
	this->q = q;
}

double Geometric::GetNum(int n)
{
	return firstElem * pow(q, n-1);
}

double Geometric::GetSum(int n)
{
	return ((firstElem * (1 - pow(q, n))) / (1 - q));
}
#pragma once
#include "Series.h"

class Geometric : public Series
{
private:
	double q;
public:
	Geometric(double q = 2.0, double firstElem = 0.0);

	double GetNum(int n);

	double GetSum(int n);
};
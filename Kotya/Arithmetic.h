#pragma once
#include "Series.h"

class Arithmetic : public Series
{
private:
	double d;
public:
	Arithmetic(double d = 4.0, double firstElem = 0.0);

	double GetNum(int n);

	double GetSum(int n);
};
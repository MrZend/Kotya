#pragma once
#include <iostream>

class Series
{
protected:
	double firstElem;
public:
	Series(double firstElem = 0);

	virtual double GetSum(int n) = 0;

	virtual double GetNum(int n) = 0;

	void GetInfo();

	virtual ~Series();
};
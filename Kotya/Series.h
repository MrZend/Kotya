#pragma once

class Series
{
protected:
	double firstElem;
public:
	Series(double firstElem = 0);

	virtual double GetSum(int n);

	virtual double GetNum(int n);

	void GetInfo();
};
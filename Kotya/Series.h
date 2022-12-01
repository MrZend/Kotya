#pragma once

class Series
{
protected:
	double firstElem;
public:
	Series(double firstElem = 0);

	double GetSum(int n);

	double GetNum(int n);

	void GetInfo();
};
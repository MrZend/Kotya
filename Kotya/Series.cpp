#include "Series.h"

Series::Series(double firstElem)
{
	this->firstElem = firstElem;
}

double Series::GetNum(int n)
{
	std::cout << "Make some calculation of getting " << n << "-num" << std::endl;
	return 0;
}

double Series::GetSum(int n)
{
	std::cout << "Make some calculation of getting sum of " << n << "`s nums" << std::endl;
	return 0;
}

void Series::GetInfo()
{
	std::cout << "\nFirst elem: " << this->firstElem << "\nSumma of 10 numbers of series: " << this->GetSum(10) << "\nFifth element of series: " << this->GetNum(5) << std::endl;
}

Series::~Series()
{
	std::cout << "\nSeries destructor..." << std::endl;
}
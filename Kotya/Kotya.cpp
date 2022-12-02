#include <iostream>
#include "Arithmetic.h"
#include "Geometric.h"


int main()
{
	// Створювати об'єкт класу Series не можна, оскільки він став абстактним(має хоч один чистий віртуальний метод)
    Series* sers[4];

	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			sers[i] = new Arithmetic(i+2);
		else
			sers[i] = new Geometric(2, i*4);
	}

	for (int i = 0; i < 4; i++)
	{
		sers[i]->GetInfo();
	}

	for (int i = 0; i < 4; i++)
	{
		delete sers[i];
	}

	// Щоб подивитись різницю з файла 'Series.h' прибери vitrual біля деструктора
}

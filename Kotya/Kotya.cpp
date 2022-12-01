#include <iostream>
#include "Arithmetic.h"
#include "Geometric.h"

int main()
{
    Series base = Series();
    base.GetInfo();

    Arithmetic art = Arithmetic();
    art.GetInfo();

    Geometric geo = Geometric();
    geo.GetInfo();
}
#include <iostream>
#include "Arithmetic.h"
#include "Geometric.h"

int main()
{
    Series *base, *art, *geo;
    base = new Series();
    art = new Arithmetic();
    geo = new Geometric(2, 2);

    base->GetInfo();
    art->GetInfo();
    geo->GetInfo();
}
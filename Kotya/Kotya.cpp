#include <iostream>
#include "Arithmetic.h"
#include "Geometric.h"

// 8
//void foo(Series ser);

// 11
//void foo(Series& ser);

// 12
void foo(Series* ser);

int main()
{
    // 9
    //foo(Series());
    //foo(Arithmetic());

    // 11
   /* Series* ser = new Series();
    foo(*ser);
    Arithmetic* art = new Arithmetic();
    foo(*art);*/

    // 12
    Series* ser = new Series();
    foo(ser);
    Arithmetic* art = new Arithmetic();
    foo(art);
}

// 8
//void foo(Series ser)
//{
//    ser.GetInfo();
//}

// 11
//void foo(Series &ser)
//{
//    ser.GetInfo();
//}

// 12
void foo(Series* ser) {
    ser->GetInfo();
}
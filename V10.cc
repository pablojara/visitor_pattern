#include "V10.h"

void V10::visit(OX ox)
{
    ox.getA();
    ox.getB();
    ox.getE1();
    ox.getE2();
}

void V10::visit(OY oy)
{
    oy.getA();
    oy.getE1();
    oy.getE2();
    oy.getE3();    
}

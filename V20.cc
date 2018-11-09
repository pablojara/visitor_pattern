#include "V20.h"

void V20::visit(OX ox)
{
    ox.getE1();
}

void V20::visit(OY oy)
{
    oy.getE1();
    oy.getE3();
}
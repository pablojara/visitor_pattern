#include "V20.h"
#include <iostream>

V20::V20()
{

}

void V20::visit(OX ox)
{
    std::cout << "I'm V20 and I'm visiting OX\n";
    ox.getE1();
}

void V20::visit(OY oy)
{
    oy.getE1();
    oy.getE3();
}
#include "OX.h"
#include "OY.h"
#include <iostream>

class V
{
    public:
        virtual void visit(OX ox) = 0;
        virtual void visit(OY oy) = 0;
};
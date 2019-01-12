#ifndef V20_H
#define V20_H

#include "V.h"
#include "OY.h"
#include "OX.h"


class V20: public V
{
    public:
        V20();
        void visit(OX ox);
        void visit(OY oy);
};

#endif
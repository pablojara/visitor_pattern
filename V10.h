#ifndef V10_H
#define V10_H

#include "V.h"
#include "OY.h"
#include "OX.h"


class V10: public V
{
    public:
        void visit(OX ox);
        void visit(OY oy);


};

#endif
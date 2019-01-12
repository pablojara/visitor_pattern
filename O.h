#ifndef O_H
#define O_H

#include "V.h"
#include "E1.h"
#include "E2.h"

class O
{

    public:
        int getA();
        virtual E1 *getE1();
        virtual E2 *getE2();
        virtual void acept(V *v);

    protected:
        int a;
        E1 *e1;
        E2 *e2;
};

#endif
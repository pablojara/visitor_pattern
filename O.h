#include "E1.h"
#include "E2.h"
#include "V.h"

class O
{

    public:
        int getA();
        E1 *getE1();
        E2 *getE2();
        virtual void acept(V v);

    protected:
        int a;
        E1 *e1;
        E2 *e2;
};
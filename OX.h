#ifndef OX_H
#define OX_H

#include "O.h"
#include "E3.h"

class OX: public O
{
    public:
        int getB();
        void setB(int b);
        void accept(V *v);

    private:
        int b;
};

#endif
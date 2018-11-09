#include "OX.h"

void OX::accept(V *v)
{
    v->visit(this);
}
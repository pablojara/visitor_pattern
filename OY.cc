#include "OY.h"

void OY::accept(V *v)
{
    v->visit(this);
}
#include "O.h"
#include "E3.h"

class OY: public O
{
    public:
        E3 getE3();
        void accept(V *v);
    private:
        E3 e3;

};
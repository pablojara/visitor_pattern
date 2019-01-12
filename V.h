#ifndef V_H
#define V_H

class OX;
class OY;
class E1;
class E21;
class E22;
class E3;

class V
{
    public:
        virtual void visit(OX *ox);
        virtual void visit(OY *oy);
};
#endif
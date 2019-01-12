#ifndef CLIENT_H
#define CLIENT_H

#include "OX.h"
#include "OY.h"
#include "V20.h"
#include "V11.h"
#include "V12.h"

class Client
{
    public:
        Client();
        int execute();
    private:
        OX *ox;
        OY *oy;

};

#endif
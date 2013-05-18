#ifndef ARBOLB_H
#define ARBOLB_H
#include "nodoTrue.h"

class ArbolB
{
    public:
        ArbolB();
        void set_headptr(nodoTrue *  mainhead);
        virtual ~ArbolB();
    protected:
    private:
        nodoTrue * headptr;
};

#endif // ARBOLB_H

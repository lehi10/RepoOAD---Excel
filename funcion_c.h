#ifndef FUNCION_C_H
#define FUNCION_C_H
#include "ArbolB.h"
#include "nodo.h"
class funcion_c: public celda
{
    public:
        funcion_c();
        virtual double eval();
        virtual ~funcion_c();
    protected:
    private:
    ArbolB * pArbol;
};

#endif // FUNCION_C_H

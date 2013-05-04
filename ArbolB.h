#ifndef ARBOLB_H
#define ARBOLB_H
#include "nodo.h"

class ArbolB
{
    public:
        ArbolB(nodo * pn);
        virtual ~ArbolB();
        void insertar();
        double eval_a();
    protected:
    private:
    nodo * m_head;
    ArbolB * Hr;
    ArbolB * Hl;

};

#endif // ARBOLB_H

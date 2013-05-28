#ifndef OPERACION_H
#define OPERACION_H
#include "nodo.h"

typedef double num;

class operacion: public nodo
{
    public:
        operacion(num (*pf)(num,num));
        virtual num eval();
        void set_R(num r);
        void set_L(num l);
        virtual ~operacion();
    protected:
    private:
    num (*m_pf)(num,num);
    num R;
    num L;

};

#endif // OPERACION_H

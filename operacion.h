#ifndef OPERACION_H
#define OPERACION_H
#include "nodo.h"

class operacion: public nodo
{
    public:
        operacion(double (*pf)(double,double));
        virtual double eval();
        void set_R(double r);
        void set_L(double l);
        virtual ~operacion();
    protected:
    private:
    double (*m_pf)(double,double);
    double R;
    double L;

};

#endif // OPERACION_H

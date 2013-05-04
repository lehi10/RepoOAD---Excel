#include "operacion.h"

operacion::operacion(double(*pf)(double,double))
{
    m_pf=pf;
}
double operacion::eval()
{
    return (*m_pf)(L,R);
}
void operacion :: set_R(double r)
{
    R=r;
}
void operacion :: set_L(double l)
{
    L=l;
}
operacion::~operacion()
{
    //dtor
}

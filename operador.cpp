#include "operador.h"

operador::operador( p_funcion  puntero)
{
    m_puntero=puntero;
}
operador ::operador()
{
    m_puntero =0;
}
void operador :: set_p_funcion(const  p_funcion & puntero)
{
    m_puntero=puntero;
}
valor operador::eval(const valor & a,const valor &b)
{
    return (*m_puntero)(a,b);
}
operador::~operador()
{
}

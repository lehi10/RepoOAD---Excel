#include "funcion_c.h"

funcion_c::funcion_c(ArbolB * p )
{
    p = new ArbolB;
    pArbol=p;
}
double funcion_c :: eval ()
{
 pArbol-> eval_a();
}
funcion_c::~funcion_c()
{
    delete p;
}

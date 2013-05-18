#ifndef OPERADOR_H
#define OPERADOR_H
#include "nodo.h"
typedef valor(*p_funcion)( valor,valor);

class operador : public nodo
{
    public:
        operador( p_funcion );
        operador();
        void set_p_funcion(const p_funcion &puntero);
         virtual double eval(const valor &Hl,const  valor& HR);
        virtual ~operador();
    protected:
    private:
        p_funcion m_puntero;
};

#endif // OPERADOR_H

#ifndef NUMBER_H
#define NUMBER_H
#include "nodo.h"

class number: public nodo
{
    public:
        number(const valor& a);

        virtual valor eval(const valor&,const valor &);
        ~number();
    protected:
    private:
        valor m_valor;
};

#endif // NUMBER_H

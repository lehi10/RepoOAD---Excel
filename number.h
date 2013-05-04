#ifndef NUMBER_H
#define NUMBER_H
#include "nodo.h"

class number:  public nodo
{
    public:
        number(double n);
        virtual ~number();
        virtual double eval () ;
    protected:
    private:
    double m_number;
};

#endif // NUMBER_H

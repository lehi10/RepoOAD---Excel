#ifndef NUMBER_C_H
#define NUMBER_C_H
#include "nodo.h"

class number_c:public celda
{
    public:
        number_c(double a);
        virtual double eval();
        virtual ~number_c();
    protected:
    private:
    double m_number_c;
};

#endif // NUMBER_C_H

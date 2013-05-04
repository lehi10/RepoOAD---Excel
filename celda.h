#ifndef CELDA_H
#define CELDA_H
#include <string>
#include <nodo.h>

class celda: public nodo
{
    public:
        celda();
        virtual eval();
        virtual ~celda();
    protected:
    private:
    string m_orden;
};

#endif // CELDA_H

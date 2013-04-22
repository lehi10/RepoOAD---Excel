#ifndef CELDA_H
#define CELDA_H
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;
class CELDA
{
    private:
        CELDA *m_der;
        CELDA *m_abj;
        int m_fila;
        int m_colum;
        string m_valor;
    public:
        CELDA();
        CELDA(string val);
        ~CELDA();

//    protected:

};

#endif // CELDA_H

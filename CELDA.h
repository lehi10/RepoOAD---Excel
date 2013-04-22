#include "CELDA.h"

CELDA::CELDA()
{
    m_der=NULL;
    m_abj=NULL;
    m_fila=0;
    m_colum=0;
    m_valor=" ";//ctor
}
CELDA::CELDA(string val)
{
    m_valor=val;
    m_der=NULL;
    m_abj=NULL;
    m_fila=0;
    m_colum=0;
}
CELDA::~CELDA()
{
    delete m_der;
    delete m_abj;
}
// EN PROCESO.... 

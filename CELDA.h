#include "celda.h"

celda::celda(const string &name,const int &x,const int &y,const valor &n,const string & text)
{
    m_x=x;
    m_y=y;
    m_number=n;
    m_text=text;
    m_orden=name;
    m_punteroD=0;
    m_punteroR= 0;
}
void celda :: set_celdaD(celda *  puntero)
{
    m_punteroD=puntero;
}

void celda :: set_celdaR(celda *  puntero)
{
    m_punteroR=puntero;
}
valor celda:: eval(const valor& ,const valor &)
{
    valor a;
    if(m_text=="")
    {
        a=0;
    }
    else
       a=0;
    return m_number+a;
}
celda::~celda()
{
    delete m_punteroD;
    delete m_punteroR;
}

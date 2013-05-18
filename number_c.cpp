#include "number.h"

number:: number(const valor &a)
{
    m_valor =a;
}
valor number ::eval(const valor &,const valor &)
{
 return m_valor;
}
number::~number()
{
}

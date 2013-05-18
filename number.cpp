#include "number.h"

number::number(double n)
{
    m_number = n;
}
double number ::  eval ()
{
 return m_number;
}

number::~number()
{
    //dtor
}

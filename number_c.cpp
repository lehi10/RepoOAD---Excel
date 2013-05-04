#include "number_c.h"

number_c::number_c(double a)
{
    m_number_c=a;
}
double number_c :: eval ()
{
    return m_number_c;
}
number_c::~number_c()
{
    //dtor
}

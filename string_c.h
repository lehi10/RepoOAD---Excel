#ifndef STRING_C_H
#define STRING_C_H
#include "nodo.h"
#include <string>

class string_c: public celda
{
    public:
        string_c(string a);
        virtual double eval();
        virtual ~string_c();
    protected:
    private:
    string m_string_c;
};

#endif // STRING_C_H

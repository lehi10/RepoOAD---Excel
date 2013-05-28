#include "parser.h"



bool parser::is_number(string value) // función momentanea, mientras , solo para probar, mientras hago una eficiente :)
{ if(value=="1"or value=="2"or value=="3"or value=="4"or value=="5"or value=="6" or value=="7" or value=="8"or value=="9"or value=="0")
        return true;
  else  return false;
}
bool parser::is_operator(string value)
{
    if(value=="+"or value=="-"or value=="*"or value=="/")
            return true;
    else    return false;

}

void parser::convert_list()
{
    /**<  pasar del string a una lista quitando espacios, etc....*/
    // en proceso...
}

void parser::pos_ord() //fata poner typedef
{

    list <string> ::const_iterator
    expre_it(expresion.begin()),
    expre_end(expresion.end()),
    pila_it(pila.begin()),
    pila_end(pila.end());

    for(;expre_it != expre_end ; ++ expre_it)
        { string element=*expre_it;
            if(is_number(*expre_it))
                salida.push_back(element);

            if(is_operator(*expre_it))
                {
                    while( pila.front()>element or !pila.empty())
                    {   string elem_ =pila.front();
                        pila.pop_front();
                        salida.push_back(elem_);}
                    pila.push_front(element);}}

    for(;pila_it != pila_end ; ++pila_it)
    {   string elem_=*pila_it;
        salida.push_back(elem_);}}



void parser::in_tree()
{

}
double parser::resol_tree()
{

}

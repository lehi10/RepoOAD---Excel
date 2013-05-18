#ifndef CELDA_H
#define CELDA_H
#include "nodo.h"
#include "ArbolB.h"
#include <vector>
#include <map>
#include <string>
using namespace std;

class celda:public nodo
{
    public:
        celda(const string &,const int &,const int &,const valor &,const string & );
        virtual valor eval(const valor&,const valor &);
        virtual ~celda();
       void  set_celdaR(celda *   puntero);//setea el puntero a la celda a su derecha
       void  set_celdaD(celda *  puntero);//setea el puntero a la celda debajo de ella
       int get_x(){return m_x;}
       int get_y(){return m_y;}
       void get_number(valor n){m_number=n;}
       void get_string(const string & text){m_text=text;}
       void get_arbol(ArbolB * p){m_funcion=p;}
       celda * get_R(){return m_punteroR;}
        celda * get_D(){return m_punteroD;}
    protected:
    private:
        int m_y;
        int m_x;
        valor m_number;
        ArbolB  * m_funcion;
        string m_text;
        string m_orden;
        celda * m_punteroR;//es un puntero a la celda a su derecha
        celda * m_punteroD;//es un puntero a la celda debaso de ella
        vector <celda *> m_celdas_actualizar;//es un vector con puntetos a las celdas que dependen de ella

};

#endif // CELDA_H

#ifndef NODOTRUE_H
#define NODOTRUE_H
#include "nodo.h"

class nodoTrue
{
    public:
        nodoTrue();
        nodoTrue(nodo * head);
        nodoTrue* get_Hl(){return m_HL;}
        nodoTrue* get_HR(){return m_HR;}
        void set_HL(nodoTrue * HL){m_HL=HL;}
        void set_RL( nodoTrue * HR){m_HR=HR;}
        virtual ~nodoTrue();
    protected:
    private:
        nodo * m_head;
        nodoTrue * m_HL;
        nodoTrue * m_HR;

};

#endif // NODOTRUE_H

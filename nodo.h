#ifndef NODO_H
#define NODO_H
typedef double valor;

class nodo
{
    public:
        virtual valor eval(const  valor&a,const valor&b)=0;
};

#endif // NODO_H

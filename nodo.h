#ifndef NODO_H
#define NODO_H


class nodo
{
    public:
        nodo();
        virtual double eval()=0;
        virtual ~nodo();
    protected:
    private:
};

#endif // NODO_H

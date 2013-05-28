#ifndef PARSER_H
#define PARSER_H
#include <list>
#include <string>
using namespace std;

class parser
{
    private:
        list<string> pila;
        list<string> salida;
        list<string> expresion;
        string expre_str;
    public:
        parser();
        void init(string str){expre_str=str;};
        void convert_list();
        bool is_number(string value);
        bool is_operator(string value);
        void pos_ord();
        void in_tree(); // proximamente >
        double resol_tree();  // proximamente >
        virtual ~parser();


};

#endif // PARSER_H


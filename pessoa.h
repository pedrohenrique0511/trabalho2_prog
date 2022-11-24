#include<iostream>

class Pessoa{
protected:
std::string nome_pessoa;
bool doador;
bool receptor;
public:
Pessoa();
~Pessoa();
virtual std::string get_nome_pessoa();
virtual bool get_doador();
virtual bool get_receptor();

};
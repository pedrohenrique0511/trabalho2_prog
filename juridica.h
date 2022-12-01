#include<iostream>
#include"pessoa.h"
#include <string>

class Juridica:public Pessoa{
protected:
std::string cnpj; //cnpj
public:
Juridica(std::string cnpj,std::string nome_pessoa); //construtor
~Juridica();//destrutor
virtual std::string get_nome_pessoa() override; //metodo get nome herdado de pessoa
virtual bool get_doador() override; //metodo get doador herdado de pessoa
virtual bool get_receptor() override; //metodo get receptor herdado de pessoa
std::string get_cnpj(); //metodo get cnpj
};
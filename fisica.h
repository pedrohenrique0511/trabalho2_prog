#include<iostream>
#include"pessoa.h"
#include <string>

class Fisica:public Pessoa{
protected:
std::string cpf; //cpf
public:
Fisica(std::string cpf,std::string nome_pessoa); //construtor
~Fisica();//destrutor
virtual std::string get_nome_pessoa() override; //metodo get nome herdado de pessoa
virtual bool get_doador() override; //metodo get doador herdado de pessoa
virtual bool get_receptor() override; //metodo get receptor herdado de pessoa
std::string get_cpf(); //metodo get cpf
};
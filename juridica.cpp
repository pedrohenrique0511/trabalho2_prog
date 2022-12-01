#include<iostream>
#include"juridica.h"
#include"pessoa.h"
#include <string>

Juridica::Juridica(std::string cnpj,std::string nome_pessoa): //metodo construtor
Pessoa(nome_pessoa), cnpj(cnpj_) {};
   
Juridica::~Juridica(){} //metodo destrutor

std::string Juridica::get_cnpj(){ //metodo get cnpj
    return cnpj;
}

#include<iostream>
#include"fisica.h"
#include"pessoa.h"
#include <string>

Fisica::Fisica(std::string cpf,std::string nome_pessoa): //metodo construtor
Pessoa(nome_pessoa), cpf(cpf_) {};
   
Fisica::~Fisica(){} //metodo destrutor

std::string Fisica::get_cpf(){ //metodo get cpf
    return cpf;
}

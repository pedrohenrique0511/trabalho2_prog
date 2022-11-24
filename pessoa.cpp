#include<iostream>
#include"pessoa.h"

Pessoa::Pessoa(){}

Pessoa::~Pessoa(){}

std::string Pessoa::get_nome_pessoa(){
    return nome_pessoa;
}

bool Pessoa::get_receptor(){
    return receptor;
}

bool Pessoa::get_doador(){
    return doador;
}
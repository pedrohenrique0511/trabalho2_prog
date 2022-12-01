#include<iostream>
#include"pessoa.h"
#include <string>


Pessoa::Pessoa(std::string nome_pessoa, bool doador, bool receptor){ //construtor
    nome_pessoa=nome_pessoa_;
    doador=doador_;
    receptor=receptor_;
} =

Pessoa::~Pessoa(){} //destrutor

std::string Pessoa::get_nome_pessoa(){ //get para retorno do nome
    return nome_pessoa;
}

bool Pessoa::get_receptor(){ //get para retorno de possivel receptor
    return receptor;
}

bool Pessoa::get_doador(){ //get para retorno de possivel receptor
    return doador;
}
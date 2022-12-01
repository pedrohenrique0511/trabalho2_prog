#include<iostream>
#include"ponto_coleta.h"
#include<string>


Ponto_Coleta::Ponto_Coleta(std::string endereco, bool reside){ //metodo construtor
    endereco=endereco_
    reside=reside_
}

Ponto_Coleta::~Ponto_Coleta(){} //metodo destrutor

std::string Ponto_Coleta:: get_endereco(){ //get endereco
    return endereco;
}

bool Ponto_Coleta::get_reside(){ //get reside
    return reside;
}
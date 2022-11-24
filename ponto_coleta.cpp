#include<iostream>
#include"ponto_coleta.h"

Ponto_Coleta::Ponto_Coleta(){}

Ponto_Coleta::~Ponto_Coleta(){}

std::string Ponto_Coleta:: get_endereco(){
    return endereco;
}

bool Ponto_Coleta::get_reside(){
    return reside;
}
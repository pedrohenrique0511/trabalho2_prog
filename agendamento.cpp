#include<iostream>
#include"agendamento.h"
#include<string>


Agendamento::Agendamento(std::string data, std::string local){ //metodo construtor
    data=data_;
    local=local_;
}

Agendamento::~Agendamento(){} //metodo destrutor

std::string Agendamento::get_data(){ //retorno da data
    return data;
}
std::string Agendamento::get_local(){ //retorno do local
    return local;
}
bool Agendamento::get_realizada(){ //retorno se o agendamento foi realizado ou nao(true or false)
    return realizada;
}
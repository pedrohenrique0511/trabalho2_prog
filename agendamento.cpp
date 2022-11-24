#include<iostream>
#include"agendamento.h"

Agendamento::Agendamento(){}

Agendamento::~Agendamento(){}

std::string Agendamento::get_data(){
    return data;
}
std::string Agendamento::get_local(){
    return local;
}
bool Agendamento::get_realizada(){
    return realizada;
}
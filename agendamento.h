#include<iostream>
#include<string>

class Agendamento{
protected:
std::string data; //data do agendamento
std::string local; //local do agendamento
bool realizada; //agendamento realizado
public:
Agendamento(std::string data, std::string local ); //metodo construtor
~Agendamento(); //metodo destrutor
std::string get_data(); //get data
std::string get_local(); //get local
bool get_realizada(); //get realizada
};
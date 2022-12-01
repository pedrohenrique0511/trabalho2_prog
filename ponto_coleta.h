#include<iostream>
#include<string>


class Ponto_Coleta{
protected:
std::string endereco; //endereco
bool reside; //reside ou nao
public:
Ponto_Coleta(std::string endereco, bool reside); //construtor
~Ponto_Coleta(); //destrutor
std::string get_endereco(); //get endereco
bool get_reside(); //get reside
};
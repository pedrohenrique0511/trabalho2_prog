#include<iostream>

class Ponto_Coleta{
protected:
std::string endereco;
bool reside;
public:
Ponto_Coleta();
~Ponto_Coleta();
std::string get_endereco();
bool get_reside();
};
#include<iostream>
#include"pessoa.h"

class Fisica:public Pessoa{
protected:
int cpf;
public:
Fisica();
~Fisica();
virtual std::string get_nome_pessoa() override;
virtual bool get_doador() override;
virtual bool get_receptor() override;
int get_cpf();
};
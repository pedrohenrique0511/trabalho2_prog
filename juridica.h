#include<iostream>
#include"pessoa.h"

class Juridica:public Pessoa{
protected:
int cnpj;
public:
Juridica();
~Juridica();
virtual std::string get_nome_pessoa() override;
virtual bool get_doador() override;
virtual bool get_receptor() override;
int get_cnpj();
};
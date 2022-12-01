#include<iostream>
#include <string>


class Pessoa{
protected:
std::string nome_pessoa; //nome da pessoa
bool doador; //booleano para doador
bool receptor; //booleano para receptor
public:
Pessoa(std::string nome_pessoa, bool doador, bool receptor); //metodo construtor
~Pessoa(); //metodo destrutor
virtual std::string get_nome_pessoa(); //get para o nome da pessoa
virtual bool get_doador(); //get para doador
virtual bool get_receptor(); //get para receptor

};
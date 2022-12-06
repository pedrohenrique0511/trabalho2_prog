#include "Usuario.h"
#include <cmath>


Usuario::Usuario()
{
	nome = "-";
	tipo = 0;
	doador = true;
	size = 0;
}

Usuario::Usuario(string newNome, long long int newTipo, bool eDoador)
{
	nome = newNome;
	tipo = newTipo;
	doador = eDoador;
	size = 0;
	localEntrega = "";
	data = "";


}

string Usuario::getNome() {
	return nome;
}

string Usuario::getTipo() {

	if (log10(tipo) == 12)
	{
		return "Fisica";
	}
	else
		return "Juridica";
}

long int Usuario::getTipoNum() {
	return tipo;
}

string Usuario::getResInter(int pos) {
	return resInter[pos];
}

bool Usuario::getDoador() {
	return doador;
}

int Usuario::getSize() {
	return size;
}

string Usuario::getLocal() {
	return localEntrega;
}

string Usuario::getData() {
	return data;
}

void Usuario::setSize(int newSize) {
	size = newSize;
}

void Usuario::setNome(string newNome)
{
	nome = newNome;
}

void Usuario::setTipo(long int numeroCadastro)
{
	tipo = numeroCadastro;
}

void Usuario::setResInter(int pos, string newRes)
{
	resInter[pos] = newRes;
}

void Usuario::setDoador(bool edoador)
{
	doador = edoador;
}

void Usuario::setLocal(string newLocal) {
	localEntrega = newLocal;
}

void Usuario::setData(string newData) {
	data = newData;
}
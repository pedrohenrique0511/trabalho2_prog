#include "Residuo.h"
using namespace std;

Residuo::Residuo() {

	nome = "";
	explicacao = "";
}

string Residuo::getNome() {
	return nome;
}

string Residuo::getExpl() {
	return explicacao;
}

void Residuo::setNome(string newName) {
	nome = newName;
}

void Residuo::setExpl(string newExpl) {
	explicacao = newExpl;
}

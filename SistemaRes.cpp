#include "SistemaRes.h"
#include <iostream>

SistemaRes::SistemaRes() {


	for (int i = 0; i < 10000; i++)
	{
		cadastrado[i].setNome("-");
		cadastrado[i].setExpl("-");
	}

	size = 0;
}
/*
void SistemaRes::imprime() {

	for (int i = 0; i < size; i++)
	{
		cout << getRes(i).getNome() << " ";
	}
	cout << endl;
}
*/
void SistemaRes::insert(Residuo newRes) {

	for (int i = 0; i <= size; i++)
	{
		if (cadastrado[i].getNome() == "-") {

			cadastrado[i].setNome(newRes.getNome());
			cadastrado[i].setExpl(newRes.getExpl());

			if (i == size)
			{
				size++;
			}

			break;

		}
	}

	cout << newRes.getExpl() << endl;
}

Residuo SistemaRes::getRes(int pos) {
	return cadastrado[pos];
}

void SistemaRes::set(int pos, Residuo newRes)
{

	cadastrado[pos].setNome(newRes.getNome());
	cadastrado[pos].setExpl(newRes.getExpl());

}

void SistemaRes::erase(string nomeDel)
{
	for (int i = 0; i < size; i++)
	{
		if (cadastrado[i].getNome() == nomeDel) {

			cadastrado[i].setNome("-");
			cadastrado[i].setExpl("-");
			break;

		}
	}
}

int SistemaRes::getSize(){
	return size;
}

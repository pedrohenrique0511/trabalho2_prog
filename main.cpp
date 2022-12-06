#include <iostream>
#include "SistemaRes.h"
#include "SistemaUsuario.h"
#include "Solido.h"
#include "Liquido.h"

using namespace std;

int main() {

	SistemaRes sistemaResiduo;
	
	cout << "Quantos residuos desejam cadastrar? ";
	int n, LS;
	string nomeRes;
	cin >> n;
	cout << "Cadastrando residuos...";

	for (int i = 0; i < n; i++) {
		cout << "Escolha um residuo " << endl;
		cout << "(insira o numero correspondente)Ele e liquido(0) ou solido(1)? ";
		cin >> LS;
		if (LS == 0)
		{
			cout << "Qual o nome do liquido a ser cadastrado? ";
			cin >> nomeRes;
			Liquido l(nomeRes);
			sistemaResiduo.insert(l);
		}
		else
		{
			cout << "Qual o nome do solido a ser cadastrado? ";
			cin >> nomeRes;
			Solido s(nomeRes);
			sistemaResiduo.insert(s);

		}
		cout << endl;
	}

	SistemaUsuario sistemaUsuario;

	cout << "Quantos usuarios vc quer cadastrar? ";
	cin >> n;

	for (int i = 0; i < n; i++) {

		int doador;
		cout << "(insira o numero correspondente)vc e um: doador(1) ou receptor(0)? ";
		cin >> doador;
		cout << endl;

		string cadastroNome;
		cout << "Insira seu nome: ";
		cin >> cadastroNome;
		cout << endl;

		long long int cpfnj;
		cout << "Qual CPF ou CNPJ? ";
		cin >> cpfnj;
		cout << endl;

		Usuario y(cadastroNome, cpfnj, doador);
		sistemaUsuario.insert(y);

	}

	cout << "Analisando coflito de interesses para realizar as coletas!" << endl;

	

	int coleta=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(sistemaUsuario.getUsuario(i).getDoador() != sistemaUsuario.getUsuario(j).getDoador()){

				for(int k=0; k < sistemaUsuario.getUsuario(i).getSize(); k++){
					for(int l=0; l < sistemaUsuario.getUsuario(j).getSize(); l++){

						if(sistemaUsuario.getUsuario(i).getResInter(k)==sistemaUsuario.getUsuario(j).getResInter(l)){
							coleta++;
						}
					}
				}	
			}
		}
	}

	cout << coleta/2 << " materiais coletados(s) com sucesso!" << endl; //divide coleta por 2, pois o for conta os residuos 2 vezes//

	/*
	if (sistemaUsuario.getUsuario(i).getDoador() != sistemaUsuario.getUsuario(j).getDoador())
	{...}
	*/











	/*
	


	//---------TESTANDO SISTEMA DE CADASTRO DE USUARIO----------
	SistemaUsuario teste;
	Usuario user1("Matheus", 486953217850, 1);
	Usuario user2("Thiago", 548846251111, 0);
	teste.insert(user1);
	teste.insert(user2);




	//-----------SISTEMA DE COLETA-------------//




















	SistemaRes sistemaResiduo;

	Liquido l1("oleo");
	Solido s1("papel");
	Solido s2("metal");

	sistemaResiduo.insert(l1);
	sistemaResiduo.insert(s1);
	sistemaResiduo.insert(s2);
	*/

}

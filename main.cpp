#include <iostream>
#include "SistemaRes.h"
#include "SistemaUsuario.h"
#include "Solido.h"
#include "Liquido.h"

using namespace std;

int main() {
	
		//------------SISTEMA DE CADASTRO DE RESIDUOS--------------//

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

		//-------------SISTEMA DE CADASTRO DE USUARIOS--------------//

	SistemaUsuario sistemaUsuario;
	int resposta=1;
	while(resposta!=0){

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

		cout << "Residuos previamente cadastrados no sistema:(insira o nome de qual deseja doar ou coletar)\n" << endl;
		for (int i = 0; i < sistemaResiduo.getSize(); i++)
		{
			cout << sistemaResiduo.getRes(i).getNome() << " ";
		}
		cout << endl;
		cout << endl;

		Usuario y(cadastroNome, cpfnj, doador);
		sistemaUsuario.insert(y);

		cout << "Deseja entrar com outra conta/cadastro? insira o numero correspondente a resposta (sim(1) ou nao(0))" << endl;
		cin>> resposta;
	}

	cout << "Analisando coflito de interesses para realizar as coletas!" << endl;

	//-----------SISTEMA DE COLETA-------------//

	int coleta=0;
	for(int i=0; i<sistemaUsuario.getSize(); i++){
		for(int j=0; j<sistemaUsuario.getSize(); j++){
			if(sistemaUsuario.getUsuario(i).getDoador() != sistemaUsuario.getUsuario(j).getDoador()){

				for(int k=0; k < sistemaUsuario.getUsuario(i).getSize(); k++){
					for(int l=0; l < sistemaUsuario.getUsuario(j).getSize(); l++){

						if(sistemaUsuario.getUsuario(i).getResInter(k)==sistemaUsuario.getUsuario(j).getResInter(l)){

							for(int p=0;p<sistemaResiduo.getSize();p++){
		
								if(sistemaUsuario.getUsuario(i).getResInter(k)==sistemaResiduo.getRes(p).getNome()){
									coleta++;
								}
							}
						}
					}
				}	
			}
		}
	}

	cout << coleta/2 << " material(is) coletados(s) com sucesso!" << endl; //divide coleta por 2, pois o for conta os residuos 2 vezes//

}

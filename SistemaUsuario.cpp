#include "SistemaUsuario.h"

SistemaUsuario::SistemaUsuario()
{
	size = 0;
}

void SistemaUsuario::insert(Usuario newUsuario)
{
	for (int i = 0; i <= size; i++)
	{

		//CADASTRANDO USUARIO EM UM LOCAL VAZIO DO VETOR
		if (cadastrados[i].getNome() == "-") {

			cadastrados[i].setNome(newUsuario.getNome());
			cadastrados[i].setTipo(newUsuario.getTipoNum());
			cadastrados[i].setDoador(newUsuario.getDoador());

			cout << "Em quantos residuos esta interessado? \n";
			int numRes;
			cin >> numRes;
			string resAux;


			//INSERINDO TODOS OS RESIDUOS QUE O USUARIO TEM/QUER NO VETOR
			for (int j = 0; j < numRes; j++)
			{
				cout << "Nome do residuo " << j + 1 << endl;
				cin >> resAux;

				cadastrados[i].setResInter(j, resAux);

			}

			cadastrados[i].setSize(numRes);


			// SE fOR UM DOADOR, ELE DECIDE QUANDO E ONDE ENTREGA OS RESIDUOS.
			if (cadastrados[i].getDoador())
			{
				string localAux;
				cout << "Qual local para entrega? ";
				cin >> localAux;
				cadastrados[i].setLocal(localAux);

				cout << endl << "Qual a data que deseja entregar? ";
				cin >> localAux;
				cadastrados[i].setData(localAux);

				cout << endl;
			}


			if (i == size)
			{
				size++;
			}

			break;

		}
	}
}

Usuario SistemaUsuario::getUsuario(int pos) {
	return cadastrados[pos];
}

void SistemaUsuario::erase(string resDel)
{
	for (int i = 0; i < size; i++)
	{
		if (cadastrados[i].getNome() == resDel) {

			cadastrados[i].setNome("-");
			break;

		}
	}
}

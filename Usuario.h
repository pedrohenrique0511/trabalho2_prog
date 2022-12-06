#include <string>
using namespace std;

class Usuario {

private:
	string nome;
	string resInter[20];

	string localEntrega;
	string data;

	long long int tipo;
	int size;

	bool doador;



public:

	Usuario();
	Usuario(string, long long int, bool);

	string getNome();
	string getTipo();
	long int getTipoNum();
	string getResInter(int);
	bool getDoador();
	int getSize();

	string getLocal();
	string getData();

	void setSize(int);
	void setNome(string);
	void setTipo(long int);
	void setResInter(int, string);
	void setDoador(bool);

	void setLocal(string);
	void setData(string);


};



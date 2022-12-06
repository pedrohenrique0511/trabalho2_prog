#include <iostream>
#include "Usuario.h"

class SistemaUsuario {

private:
	Usuario cadastrados[1000];
	int size;

public:

	SistemaUsuario();
	void insert(Usuario);	
	Usuario getUsuario(int);
	int getSize();
	void erase(string);


};

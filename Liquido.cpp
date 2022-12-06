#include "Liquido.h"

Liquido::Liquido() {
	nome = "";
	explicacao = "Descartar em um recipiente bem fechado (para evitar vazamentos), que nao seja de material quebradico cortante, informando o liquido que ha dentro.\n";
}

Liquido::Liquido(string newName) {
	nome = newName;
	explicacao = "Descartar em um recipiente bem fechado (para evitar vazamentos), que nao seja de material quebradico cortante, informando o liquido que ha dentro.\n";
}


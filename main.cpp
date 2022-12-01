#include <iostream>
#include "residuo.h"
#include "residuo_liquido.h"
#include "residuo_solido.h"
#include "pessoa.h"
#include "juridica.h"
#include "fisica.h"
#include "ponto_coleta.h"
#include "agendamento.h"

int main(){

    Residuo res;
        res.adcionarResiduo();
        res.removerResiduo();
        res.~Residuo();

    Ponto_Coleta pnt;
        pnt.get_endereco();
        pnt.get_reside();
        pnt.~Ponto_Coleta();

    Pessoa p;
        p.get_doador();
        p.get_nome_pessoa();
        p.get_receptor();
        p.~Pessoa();

    Agendamento ag;
        ag.get_data();
        ag.get_local();
        ag.get_realizada();
        ag.~Agendamento();
    
    return 0;
}
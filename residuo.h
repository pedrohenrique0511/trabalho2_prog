#ifndef RESIDUO_H
#define RESIDUO_H


#include <string>
using namespace std;
class Residuo {

private:

public:

    void setExpl(string);
    string nome;
    string explicacao;



    Residuo();

    string getNome();
    string getExpl();

    void setNome(string);

};

#endif

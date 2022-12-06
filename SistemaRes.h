#include "Residuo.h"

class SistemaRes {

private:



public:


    Residuo cadastrado[10000];
    int size;




    SistemaRes();
    //void imprime();
    void insert(Residuo);   //CREATE
    Residuo getRes(int);    //READ
    void set(int, Residuo); //UPDATE
    void erase(string);     //DELETE


};

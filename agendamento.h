#include<iostream>

class Agendamento{
protected:
std::string data;
std::string local;
bool realizada;
public:
Agendamento();
~Agendamento();
std::string get_data();
std::string get_local();
bool get_realizada();
};
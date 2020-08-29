#include "Casa.h"

Casa::Casa()
{
    numPavimentos = 0;
    numQuartos = 0;
    areaTerreno = 0.0;
    areaConstruida = 0.0;
    Disponivel =0;
}
int Casa::getNumPavimentos(){
    return numPavimentos;
}
int Casa::getNumQuartos(){
    return numQuartos;
}
double Casa::getAreaTerreno(){
    return areaConstruida;
}
double Casa::getAreaConstruida(){
    return areaConstruida;
}

void Casa::setnumPavimentos(int np){
    this->numPavimentos=numPavimentos;
}
void Casa::setnumQuartos(int nq){
    this->numQuartos=nq;
}
void Casa::setareaTerreno(double areat){
    this->areaTerreno=areat;
}

void Casa::setareaConstruida(double ac){
    this->areaConstruida=ac;
}
Casa::~Casa()
{
    //dtor
}

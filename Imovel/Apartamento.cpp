#include "Apartamento.h"

Apartamento::Apartamento()
{
    numPavimentos = 0;
    numQuartos = 0;
    areaTerreno = 0.0;
    areaConstruida = 0.0;
    Disponivel = 0;
}
int Apartamento::getnumAndar(){
        return numAndar;
}
int Apartamento::getNumPavimentos(){
    return numPavimentos;
}
int Apartamento::getNumQuartos(){
    return numQuartos;
}
double Apartamento::getAreaTerreno(){
    return areaConstruida;
}
double Apartamento::getAreaConstruida(){
    return areaConstruida;
}

void Apartamento::setnumAndar(int num){
    this->numAndar=num;

}
void Apartamento::setnumPavimentos(int numPavimentos){
    this->numPavimentos=numPavimentos;
}
void Apartamento::setnumQuartos(int numQuartos){
    this->numQuartos=numQuartos;
}
void Apartamento::setareaTerreno(double areaTerreno){
    this->areaTerreno=areaTerreno;
}

void Apartamento::setareaConstruida(double areaConstruida){
    this->areaConstruida=areaConstruida;
}
Apartamento::~Apartamento()
{
    //dtor
}

#include "Imovel.h"
#include <iostream>
using namespace std;

Imovel::Imovel()
{
    //ctor
}

bool Imovel::getVender(){
    return paraVender;
}
bool Imovel::getAlugar(){
    return paraAlugar;
}
double Imovel::getValor(){
    return valor;
}
string Imovel::getTipoImovel(){
    return tipoImovel;
}
bool Imovel::getDisponivel(){
    return Disponivel;
}
void Imovel::setDisponivel(bool disp){
        this->Disponivel = disp;
}
string Imovel::getnome(){
    return nome;
}
Endereco Imovel::getEndereco(){
    return endereco;
}
void Imovel::getDescricao(){
    getnome();
    getVender();
    getAlugar();
    getValor();

}
void Imovel::setVender(bool paraVender){
    this->paraVender = paraVender;
}
void Imovel::setAlugar(bool paraAlugar){
    this->paraAlugar = paraAlugar;
}
void Imovel::setValor(double valor){
    this->valor = valor;
}
void Imovel::setEndereco(Endereco endereco){
    this->endereco = endereco;
}
void Imovel::setnome(string nome){
    this->nome = nome;
}
void Imovel::setTipoImovel(string nome){
    this->tipoImovel=nome;
}

Imovel::~Imovel()
{
    //dtor
}

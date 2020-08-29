#include "Endereco.h"

Endereco::Endereco()
{
    rua = "";
    numero = 0;
    bairro = "";
    cidade = "";
    CEP = "";
}
string Endereco::getRua(){
    return rua;
}
int Endereco::getNumero(){
    return numero;
}
string Endereco::getBairro(){
    return bairro;
}
string Endereco::getCidade(){
    return cidade;
}
string Endereco::getCEP(){
    return CEP;
}

void Endereco::setRua(string rua){
    this->rua = rua;
}
void Endereco::setNumero(int numero){
    this->numero = numero;
}
void Endereco::setBairro(string bairro){
    this->bairro = bairro;
}
void Endereco::setCidade(string cidade){
    this->cidade = cidade;
}
void Endereco::setCEP(string CEP){
    this->CEP = CEP;
}
Endereco::~Endereco()
{
    //dtor
}

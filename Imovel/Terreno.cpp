#include "Terreno.h"

Terreno::Terreno()
{
    area = 0.0;
    Disponivel = 0;
}
void Terreno::setArea(double area){
    this->area = area;
}
double Terreno::getArea(){
    return area;
}
Terreno::~Terreno()
{
    //dtor
}

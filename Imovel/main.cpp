#include <iostream>
#include "IMOVEL.H"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include "Endereco.h"
#include "SistemaImobiliaria.h"
using namespace std;

int main()
{
    SistemaImobiliaria sistema;

    sistema.CadastraImovel(sistema.CadastraGeral());

    return 0;
}

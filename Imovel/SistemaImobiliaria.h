#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H
#include "IMOVEL.H"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include "Endereco.h"
#include <vector>
#include <algorithm>
#include <string>
class SistemaImobiliaria
{
    public:
        SistemaImobiliaria();
        Imovel* CadastraGeral();
        void CadastraImovel(Imovel* im);
        void ExibirImovel();
        virtual ~SistemaImobiliaria();

    private:
    vector<Imovel*> sist;

};

#endif // SISTEMAIMOBILIARIA_H

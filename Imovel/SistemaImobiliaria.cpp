#include "SistemaImobiliaria.h"
#include "IMOVEL.H"
#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include "Endereco.h"
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
SistemaImobiliaria::SistemaImobiliaria()
{

}

Imovel* SistemaImobiliaria::CadastraGeral(){

    Imovel* cadastro;
    Endereco End;
    string string_geral;
    double double_geral;
    int int_geral;


    cout<<"\t//Tipo de Imovel//"<<endl;
    cin>> string_geral;
    transform(string_geral.begin(), string_geral.end(), string_geral.begin(), ::tolower);
    //transformaçao de das palavras para minusculo
    if(string_geral=="casa"){
        cadastro = new Casa();
        cin.ignore();
        cout<< "//Titulo do imovel//"<<endl;
        getline(cin,string_geral);
        cadastro->setnome(string_geral);
        cout<<"//Valor do Imovel//"<<endl;
        cin>>double_geral;
        cadastro->setValor(double_geral);
        cout << "// 1 - Vender //"
                "// 2 - Alugar //"<<endl;
        cin>>int_geral;
        switch(int_geral){
        case 1 :
            cadastro->setVender(1);
            cadastro->setAlugar(0);
            break;
        case 2:
            cadastro->setVender(0);
            cadastro->setAlugar(1);
            break;
        default:
            cadastro->setVender(1);
            cadastro->setAlugar(0);
            break;
        }
        cout<< "// Numero de Pavimentos//"<<endl;
        cin>>int_geral;
        static_cast <Casa*> (cadastro)->setnumPavimentos(int_geral);
        cout<<"// Numero de Quartos//"<<endl;
        cin>>int_geral;
        static_cast <Casa*> (cadastro)->setnumQuartos(int_geral);
        cout<<"// Area do Terreno //"<<endl;
        cin>>double_geral;
        static_cast <Casa*> (cadastro)->setareaTerreno(double_geral);
        cout<<"// Area Contruida //"<<endl;
        cin>>double_geral;
        static_cast <Casa*> (cadastro)->setareaConstruida(double_geral);




    }

    if(string_geral=="apartamento"){

            cadastro = new Apartamento();
        cin.ignore();
        cout<< "//Titulo do imovel//"<<endl;
        getline(cin,string_geral);
        cadastro->setnome(string_geral);
        cout<<"//Valor do Imovel//"<<endl;
        cin>>double_geral;
        cadastro->setValor(double_geral);
        cout << "// 1 - Vender //"
                "// 2 - Alugar //"<<endl;
        cin>>int_geral;
        switch(int_geral){
        case 1 :
            cadastro->setVender(1);
            cadastro->setAlugar(0);
            break;
        case 2:
            cadastro->setVender(0);
            cadastro->setAlugar(1);
            break;
        default:
            cadastro->setVender(1);
            cadastro->setAlugar(0);
            break;
        }
        cout<< "// Numero de Pavimentos//"<<endl;
        cin>>int_geral;
        static_cast <Apartamento*> (cadastro)->setnumPavimentos(int_geral);
        cout<< "// Numero do Andar//"<<endl;
        cin>>int_geral;
        static_cast <Apartamento*> (cadastro)->setnumAndar(int_geral);
        cout<<"// Numero de Quartos//"<<endl;
        cin>>int_geral;
        static_cast <Apartamento*> (cadastro)->setnumQuartos(int_geral);
        cout<<"// Area do Terreno //"<<endl;
        cin>>double_geral;
        static_cast <Apartamento*> (cadastro)->setareaTerreno(double_geral);
        cout<<"// Area Contruida //"<<endl;
        cin>>double_geral;
        static_cast <Apartamento*> (cadastro)->setareaConstruida(double_geral);





    }
    if(string_geral=="terreno"){

            cadastro = new Apartamento();
        cin.ignore();
        cout<< "//Titulo do imovel//"<<endl;
        getline(cin,string_geral);
        cadastro->setnome(string_geral);
        cout<<"//Valor do Imovel//"<<endl;
        cin>>double_geral;
        cadastro->setValor(double_geral);
        cout << "// 1 - Vender //"
                "// 2 - Alugar //"<<endl;
        cin>>int_geral;
        switch(int_geral){
        case 1 :
            cadastro->setVender(1);
            cadastro->setAlugar(0);
            break;
        case 2:
            cadastro->setVender(0);
            cadastro->setAlugar(1);
            break;
        default:
            cadastro->setVender(1);
            cadastro->setAlugar(0);
            break;
        }
        cout<<"// Area //"<<endl;
        cin>> double_geral;
        static_cast <Terreno*> (cadastro)->setArea(double_geral);

    }
      cout<<"// Endereco //\n"
            <<"\tRua:"<<endl;
        cin.ignore();
        getline(cin, string_geral);
        End.setRua(string_geral);
        cout<<"\t Bairro"<<endl;
        getline(cin, string_geral);
        End.setBairro(string_geral);
        cout<<"\t Numero"<<endl;
        cin>>int_geral;
        End.setNumero(int_geral);
        cout<<"\t Cidade"<<endl;
        cin.ignore();
        getline(cin, string_geral);
        End.setCidade(string_geral);
        cout<<"\t CEP"<<endl;
        getline(cin, string_geral);
        End.setCEP(string_geral);

        cadastro->setEndereco(End);



    return cadastro;
}

void SistemaImobiliaria::CadastraImovel(Imovel* im){

sist.push_back(im);
cout<<"//////////////////////////////////"
      "//Cadastro realizado com sucesso//"
      "//////////////////////////////////"<<endl;
}

void SistemaImobiliaria::ExibirImovel(){

}
SistemaImobiliaria::~SistemaImobiliaria()
{
    //dtor
}

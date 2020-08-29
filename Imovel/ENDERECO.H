#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>
using namespace std;

class Endereco
{
    public:
        Endereco();
        virtual ~Endereco();

        string getRua();
        int getNumero();
        string getBairro();
        string getCidade();
        string getCEP();

        void setRua(string rua);
        void setNumero(int numero);
        void setBairro(string bairro);
        void setCidade(string cidade);
        void setCEP(string CEP);
        void setEndTodo();
    protected:
        string rua;
        int numero;
        string bairro;
        string cidade;
        string CEP;
};

#endif // ENDERECO_H

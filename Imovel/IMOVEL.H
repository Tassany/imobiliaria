#ifndef IMOVEL_H
#define IMOVEL_H
#include "ENDERECO.H"


class Imovel
{
    public:
        Imovel();
        virtual ~Imovel();

        string getnome();
        bool getVender();
        bool getAlugar();
        double getValor();
        string getTipoImovel();
        bool getDisponivel();
        void getDescricao();
        Endereco getEndereco();

        void setDisponivel(bool disp);
        void setnome(string nome);
        void setVender(bool paraVender);
        void setAlugar(bool paraAlugar);
        void setValor(double valor);
        void setEndereco(Endereco endereco);
        void setTipoImovel(string nome);

    protected:
        string nome;
        bool paraVender;
        bool paraAlugar;
        bool Disponivel;
        double valor;
        Endereco endereco;
        string tipoImovel;

};

#endif // IMOVEL_H

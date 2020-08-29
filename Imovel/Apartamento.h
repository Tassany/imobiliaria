#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "IMOVEL.H"


class Apartamento : public Imovel
{
    public:
        Apartamento();
        virtual ~Apartamento();

        int getnumAndar();
        int getNumPavimentos();
        int getNumQuartos();
        double getAreaTerreno();
        double getAreaConstruida();


        void setnumAndar(int num);
        void setnumPavimentos(int np);
        void setnumQuartos(int nq);
        void setareaTerreno(double areat);
        void setareaConstruida(double ac);

    private:
        int numAndar;
        int numPavimentos;
        int numQuartos;
        double areaTerreno;
        double areaConstruida;
};

#endif // APARTAMENTO_H

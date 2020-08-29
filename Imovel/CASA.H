#ifndef CASA_H
#define CASA_H
#include "IMOVEL.H"


class Casa : public Imovel
{
    public:
        Casa();
        virtual ~Casa();
        int getNumPavimentos();
        int getNumQuartos();
        double getAreaTerreno();
        double getAreaConstruida();

        void setnumPavimentos(int np);
        void setnumQuartos(int nq);
        void setareaTerreno(double areat);
        void setareaConstruida(double ac);
    private:
        int numPavimentos;
        int numQuartos;
        double areaTerreno;
        double areaConstruida;
};

#endif // CASA_H

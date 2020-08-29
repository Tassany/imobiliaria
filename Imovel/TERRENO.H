#ifndef TERRENO_H
#define TERRENO_H
#include "IMOVEL.H"

class Terreno : public Imovel
{
    public:
        Terreno();
        virtual ~Terreno();

        void setArea(double area);
        double getArea();
    private:
        double area;
};

#endif // TERRENO_H

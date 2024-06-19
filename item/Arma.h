//
// Created by Armando on 18/06/2024.
//

#ifndef EJERCICIOS_ARMA_H
#define EJERCICIOS_ARMA_H
#include "items.h"

class Arma : public items{
public:
    //Constructor default implicito
    Arma();

    //Constructor Explicitp
    Arma(std::string nombre,int danoFisico);

    //Destructor
    ~Arma();

    //Getters
    int GetDanoFisico() const;

    //Setters
    void SetDanoFisico(int NdanoFisico);


    //Metodos
    void Usar() override;

private:
    int danoFisico;

};


#endif //EJERCICIOS_ARMA_H

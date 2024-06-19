//
// Created by Armando on 18/06/2024.
//

#ifndef EJERCICIOS_POCION_H
#define EJERCICIOS_POCION_H
#include "items.h"

class Pocion : public items{
public:
    //Constructor default implicito
    Pocion();

    //Constructor Explicitp
    Pocion(std::string nombre,int danoMagico);

    //Destructor
    ~Pocion();

    //Getters
    int GetDanoMagico() const;

    //Setters
    void SetDanoMagico(int NdanoMagico);


    //Metodos
    void Usar() override;

private:
    int danoMagico;
};


#endif //EJERCICIOS_POCION_H

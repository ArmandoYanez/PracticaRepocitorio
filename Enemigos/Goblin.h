//
// Created by Armando on 11/06/2024.
//

#ifndef EJERCICIOS_GOBLIN_H
#define EJERCICIOS_GOBLIN_H
#include "Enemigos.h"

class Goblin : public Enemigos{
public:
    //Constructor default implicito
    Goblin();

    //Constructor Explicitp
    Goblin(std::string nombre, float nivel, std::string arma, std::string oficio);

    //Destructor
    //Para que puedan ejecturase en clases hijas con variaciones.
    ~Goblin();

    //Getters
    std::string Getarma() const;
    std::string Getoficio() const;

    //Setters
    void Setoficio(std::string Noficio);
    void Setarma(std::string Narma);

    //Funcion
    void RecibirDano(float danoRecibido) override;

private:
    std::string arma;
    std::string oficio;
};


#endif //EJERCICIOS_GOBLIN_H

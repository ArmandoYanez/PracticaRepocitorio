//
// Created by Asus ROG on 18/06/2024.
//

#ifndef EJERCICIOS_BOLADEFUEGO_H
#define EJERCICIOS_BOLADEFUEGO_H
#include "Habilidad.h"

class BolaDeFuego : public Habilidad{
public:
    //Constructor default implicito
    BolaDeFuego();

    //Constructor Explicito
    BolaDeFuego(int nivel, int dano);

    //Destructor
    //Para que puedan ejecturase en clases hijas con variaciones.
    ~BolaDeFuego();

    //Getters
    int GetDano() const;

    //Setters
    void SetDano(int Ndano);

    //Funcion
    void Usar() override;

private:
    int dano;
};


#endif //EJERCICIOS_BOLADEFUEGO_H

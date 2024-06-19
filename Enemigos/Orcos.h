//
// Created by Armando on 11/06/2024.
//

#ifndef EJERCICIOS_ORCOS_H
#define EJERCICIOS_ORCOS_H
#include "Enemigos.h"

class Orcos : public Enemigos{
public:
    //Constructor default implicito
    Orcos();

    //Constructor Explicitp
    Orcos(std::string nombre, float nivel, std::string clase, float cantidadDeDano);

    //Destructor
    //Para que puedan ejecturase en clases hijas con variaciones.
     ~Orcos();

    //Getters
    std::string GetClase() const;
    float GetcantidadDeDano() const;

    //Setters
    void SetClase(std::string Nnombre);
    void SetcantidadDeDano(float NcantidadDeVida);

    //Funcion
    void RecibirDano(float danoRecibido) override;


private:
    std::string clase;
    float cantidadDeDano;
};


#endif //EJERCICIOS_ORCOS_H

//
// Created by Asus ROG on 11/06/2024.
//

#ifndef EJERCICIOS_ENEMIGOS_H
#define EJERCICIOS_ENEMIGOS_H
#include <string>

class Enemigos {
public:

    //Constructor default implicito
    Enemigos();

    //Constructor Explicitp
    Enemigos(std::string nombre, float nivel);

    //Destructor
    //Para que puedan ejecturase en clases hijas con variaciones.
    virtual ~Enemigos();

    //Getters
    std::string GetNombre() const;

    float GetcantVida() const;


    //Setters
    void SetNombre(std::string Nnombre);

    void SetCantidad(float NcantidadDeVida);

    //Funcion
    virtual void RecibirDano(float danoRecibido);

private:
    std::string nombre;
    float cantVida;
};

#endif //EJERCICIOS_ENEMIGOS_H

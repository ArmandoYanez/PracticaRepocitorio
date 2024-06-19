//
// Created by Asus ROG on 11/06/2024.
//

#ifndef EJERCICIOS_PERSONAJE_H
#define EJERCICIOS_PERSONAJE_H
#include <string>
#include <vector>
#include "../Habilidades/Habilidad.h"

class Personaje {
public:

    //Constructor default implicito
    Personaje();

    //Constructor Explicitp
    Personaje(std::string nombre, int nivel, float vida, float velocidad,std::vector<Habilidad*> vHabilidades);

    //Destructor
    //Para que puedan ejecturase en clases hijas con variaciones.
    virtual ~Personaje();

    //Getters
    std::string GetNombre() const;

    int GetNivel() const;

    float GetVida() const;

    float GetVelocidad() const;


    //Setters
    void SetNombre(std::string Nnombre);

    void SetNivel(int Nnivel);

    void SetVida(float Nvida);

    void SetVelocidad(float Nvelocidad);

    //Funcion
    virtual void Ataque();

    //Para habilidades
    void mostrarHa();
    void AgregarHa(Habilidad* habilidad);
private:
    std::string nombre;
    int nivel;
    float vida;
    float velocidad;

    std::vector<Habilidad*> vHabilidades;
};



#endif //EJERCICIOS_PERSONAJE_H

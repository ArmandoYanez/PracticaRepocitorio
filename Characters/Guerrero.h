//
// Created by Asus ROG on 11/06/2024.
//

#ifndef EJERCICIOS_GUERRERO_H
#define EJERCICIOS_GUERRERO_H
#include "Personaje.h"
#include "../item/Inventario.h"

class Guerrero : public Personaje, Inventario {
public:
    //Constructor default implicito
    Guerrero();

    //Constructor Explicito
    Guerrero(std::string nombre, int nivel, float vida, float velocidad,std::vector<Habilidad*> vHabilidades, std::string arma, float danoPorAtaque);

    //Destructor
    ~Guerrero();

    //Getters
    std::string GetArma() const;
    float GetdamoPorAtaque() const;

    //Setters
    void SetNarma(std::string Narma);
    void SetcantDeDano(float NcantDeMana);

    //Funcion
    void Ataque() override;

private:
    std::string nombre;
    int nivel;
    float vida;
    float velocidad;

    std::string arma;
    float danoPorAtaque;
};


#endif //EJERCICIOS_GUERRERO_H

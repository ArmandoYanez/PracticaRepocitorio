//
// Created by Asus ROG on 11/06/2024.
//

#ifndef EJERCICIOS_MAGOS_H
#define EJERCICIOS_MAGOS_H
#include "Personaje.h"
#include "../item/Inventario.h"
//Herencia
class Magos : public Personaje, public Inventario{
public:
    //Constructor default implicito
    Magos();

    //Constructor Explicitp
    Magos(std::string nombre, int nivel, float vida, float velocidad,std::vector<Habilidad*> vHabilidades, std::string tipoDeHechizo, float cantMana);

    //Destructor
    ~Magos();

    //Getters
    std::string GetTipoDeHechizo() const;
    float GetcantMana() const;

    //Setters
    void SettipoDeHechizo(std::string NtipoDeHechizo);
    void SetcantDeMana(float NcantDeMana);

    //Funcion
    void Ataque() override;

private:
    std::string nombre;
    int nivel;
    float vida;
    float velocidad;

    std::string tipoDeHechizo;
    float cantMana;
};


#endif //EJERCICIOS_MAGOS_H

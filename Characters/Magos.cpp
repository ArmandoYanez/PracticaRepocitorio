//
// Created by Asus ROG on 11/06/2024.
//

#include "Magos.h"
#include <iostream>

// Contructor default
Magos::Magos() : Personaje(), Inventario(){
    tipoDeHechizo = "N/A";
    cantMana = 0;
}

//Constructor por paramertos
Magos::Magos(std::string nombre, int nivel, float vida, float velocidad,std::vector<Habilidad*> vHabilidades, std::string tipoDeHechizo, float cantMana): Personaje(nombre, nivel, vida, velocidad, vHabilidades), Inventario(){
    this->tipoDeHechizo = tipoDeHechizo;
    this->cantMana = cantMana;
}

//Getters
std::string Magos::GetTipoDeHechizo() const{
    return tipoDeHechizo;
}

float Magos::GetcantMana() const{
    return cantMana;
}

//Setters
void Magos::SettipoDeHechizo(std::string NtipoDeHechizo){
    this -> tipoDeHechizo = NtipoDeHechizo;
}

void Magos::SetcantDeMana(float NcantDeMana){
    this -> cantMana = NcantDeMana;
}

//Funciones para destruir
Magos::~Magos(){
    std::cout<<"Mago eliminado"<<std::endl;
}

//Funciones presentarse
void Magos::Ataque() {
    std::cout<<"Fuego"<<std::endl;
}
//
// Created by Asus ROG on 11/06/2024.
//

#include "Guerrero.h"
#include <iostream>

// Contructor default
Guerrero::Guerrero() : Personaje(), Inventario(){
    this->arma = "N/A";
    this->danoPorAtaque = 0;
}

//Constructor por paramertos
Guerrero::Guerrero(std::string nombre, int nivel, float vida, float velocidad,std::vector<Habilidad*> vHabilidades,std::string arma, float danoPorAtaque): Personaje(nombre, nivel, vida, velocidad, vHabilidades), Inventario(){
    this->arma = arma;
    this->danoPorAtaque = danoPorAtaque;
}

//Getters
std::string Guerrero::GetArma() const{
    return arma;
}

float Guerrero::GetdamoPorAtaque() const{
    return danoPorAtaque;
}

//Setters
void Guerrero::SetNarma(std::string Narma){
    this -> arma = Narma;
}


void Guerrero::SetcantDeDano(float NdanoPorAtaque){
    this -> danoPorAtaque = NdanoPorAtaque;
}

//Funciones para destruir
Guerrero::~Guerrero(){
    std::cout<<"Guerrero eliminado"<<std::endl;
}

//Funciones presentarse
void Guerrero::Ataque() {
    std::cout<<"Espadaso"<<std::endl;
}


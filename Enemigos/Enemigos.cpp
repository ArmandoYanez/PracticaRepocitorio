//
// Created by Asus ROG on 11/06/2024.
//

#include "Enemigos.h"
#include <iostream>

// Contructor default
Enemigos::Enemigos(){
    this->nombre = "N/A";
    this->cantVida = 0;
}

// Constructor por parametros
Enemigos::Enemigos(std::string nombre, float nivel) {
    this->nombre = nombre;
    this->cantVida = cantVida;
}

//Getters
std::string Enemigos::GetNombre() const{
    return nombre;
}

float Enemigos::GetcantVida() const{
    return cantVida;
}


//Setters
void Enemigos::SetNombre(std::string Nnombre){
    this -> nombre = Nnombre;
}

void Enemigos::SetCantidad(float NcantidadDeVida){
    this -> cantVida = NcantidadDeVida;
}


//Funciones para destruir
Enemigos::~Enemigos(){
    std::cout<<"Enemigo eliminado"<<std::endl;
}

//Funciones presentarse
void Enemigos::RecibirDano(float danoRecibido) {
    std::cout<<"Recibio daño"<<std::endl;
}

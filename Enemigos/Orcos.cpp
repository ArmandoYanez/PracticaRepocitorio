//
// Created by Armando on 11/06/2024.
//

#include "Orcos.h"
#include <iostream>

// Contructor default
Orcos::Orcos() : Enemigos(){
    clase = "N/A";
    cantidadDeDano = 0;
}

//Constructor por paramertos
Orcos::Orcos(std::string nombre, float cantVida, std::string clase, float cantidadDeDano): Enemigos(nombre, cantVida){
    this->clase = clase;
    this->cantidadDeDano = cantidadDeDano;
}

//Getters
std::string Orcos::GetClase() const{
    return clase;
}

float Orcos::GetcantidadDeDano() const{
    return cantidadDeDano;
}

//Setters
void Orcos::SetClase(std::string Nclase){
    this -> clase = Nclase;
}

void Orcos::SetcantidadDeDano(float NcantidadDeDano){
    this -> cantidadDeDano = NcantidadDeDano;
}

//Funciones para destruir
Orcos::~Orcos(){
    std::cout<<"Orco eliminado"<<std::endl;
}

//Funciones presentarse
void Orcos::RecibirDano(float danoRecibido) {
    int resistencia = 5;
    this->SetCantidad(this->GetcantVida()-danoRecibido);
    std::cout<<"Vida actual: "<<this->GetcantVida()<<std::endl;
}



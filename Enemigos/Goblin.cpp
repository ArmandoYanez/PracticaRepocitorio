//
// Created by Armando on 11/06/2024.
//

#include "Goblin.h"


#include <iostream>

// Contructor default
Goblin::Goblin() : Enemigos(){
    arma = "N/A";
    oficio = "N/A";
}

//Constructor por paramertos
Goblin::Goblin(std::string nombre, float cantVida, std::string arma, std::string oficio): Enemigos(nombre, cantVida){
    this->arma = arma;
    this->oficio = oficio;
}

//Getters
std::string Goblin::Getarma() const{
    return arma;
}

std::string Goblin::Getoficio() const{
    return oficio;
}

//Setters
void Goblin::Setarma(std::string Narma){
    this -> arma = Narma;
}

void Goblin::Setoficio(std::string Noficio){
    this -> oficio = Noficio;
}


//Funciones para destruir
Goblin::~Goblin(){
    std::cout<<"Goblin eliminado"<<std::endl;
}

//Funciones
void Goblin::RecibirDano(float danoRecibido) {
    int resistencia = 1;
    this->SetCantidad(this->GetcantVida()-danoRecibido);
    std::cout<<"Vida actual: "<<this->GetcantVida()<<std::endl;
}
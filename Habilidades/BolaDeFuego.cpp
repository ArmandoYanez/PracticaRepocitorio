//
// Created by Asus ROG on 18/06/2024.
//

#include "BolaDeFuego.h"
#include <iostream>

// Contructor default
BolaDeFuego::BolaDeFuego(){
    this->dano = 0;
}

// Constructor por parametros
BolaDeFuego::BolaDeFuego(int nivel, int dano) : Habilidad(nivel) {
    this->dano = dano;
}

//Getters
int BolaDeFuego::GetDano() const{
    return dano;
}

//Setters
void BolaDeFuego::SetDano(int Ndano){
    this -> dano = Ndano;
}

//Funciones presentarse
void BolaDeFuego::Usar() {
    std::cout<<"Se uso la bola de fuego."<<std::endl;
}

//Funciones para destruir
BolaDeFuego::~BolaDeFuego(){
    std::cout<<"Bola de fuego eliminada"<<std::endl;
}

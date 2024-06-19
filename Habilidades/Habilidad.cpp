//
// Created by Asus ROG on 18/06/2024.
//

#include "Habilidad.h"
#include <iostream>

// Contructor default
Habilidad::Habilidad(){
    this->nivel = 0;
}

// Constructor por parametros
Habilidad::Habilidad(int nivel) {
    this->nivel = nivel;
}

//Getters
int Habilidad::GetNivel() const{
    return nivel;
}

//Setters
void Habilidad::SetNivel(int Nnivel){
    this -> nivel = Nnivel;
}

//Funciones presentarse
void Habilidad::Usar() {
    std::cout<<"Se uso habilidad."<<std::endl;
}

//Funciones para destruir
Habilidad::~Habilidad(){
    std::cout<<"Habilidad eliminada"<<std::endl;
}

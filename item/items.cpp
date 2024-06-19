//
// Created by Asus ROG on 18/06/2024.
//

#include "items.h"
#include <iostream>

// Contructor default
items::items(){
    this->nombre = "N/A";
}

// Constructor por parametros
items::items(std::string nombre) {
    this->nombre = nombre;
}

//Getters
std::string items::GetNombre() const{
    return nombre;
}

//Setters
void items::SetNombre(std::string Nnombre){
    this -> nombre = Nnombre;
}

//Funciones presentarse
void items::Usar() {
    std::cout<<nombre << "utilizado"<<std::endl;
    delete this;
}

//Funciones para destruir
items::~items(){
    std::cout<<nombre<<" eliminado"<<std::endl;
}



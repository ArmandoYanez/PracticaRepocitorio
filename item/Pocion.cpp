//
// Created by Armando on 18/06/2024.
//

#include "Pocion.h"
#include <iostream>

// Contructor default
Pocion::Pocion() : items(){
    danoMagico = 0;
}

//Constructor por paramertos
Pocion::Pocion(std::string nombre,int danoMagico): items(nombre){
    this->danoMagico = danoMagico;
}

//Getters
int Pocion::GetDanoMagico() const{
    return danoMagico;
}

//Setters
void Pocion::SetDanoMagico(int NdanoMagico){
    this -> danoMagico = danoMagico;
}

//Funciones para destruir
Pocion::~Pocion(){
    std::cout<<"Pocion eliminada"<<std::endl;
}

//Metodos
void Pocion::Usar(){
    std::cout<< GetNombre() << "utilizada "<< "+"<<danoMagico<<" de dano magico."<<std::endl;
    delete this;
}
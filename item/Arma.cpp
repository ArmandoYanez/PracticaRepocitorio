//
// Created by Armando on 18/06/2024.
//

#include "Arma.h"
#include <iostream>

// Contructor default
Arma::Arma() : items(){
    danoFisico = 0;
}

//Constructor por paramertos
Arma::Arma(std::string nombre,int danoFisico): items(nombre){
  this->danoFisico = danoFisico;
}

//Getters
int Arma::GetDanoFisico() const{
    return danoFisico;
}

//Setters
void Arma::SetDanoFisico(int NdanoFisico){
    this -> danoFisico = NdanoFisico;
}


//Funciones para destruir
Arma::~Arma(){
    std::cout<<"Arma eliminada"<<std::endl;
}

//Metodos
void Arma::Usar(){
    std::cout<< GetNombre() << "utilizada "<< "+"<<danoFisico<<" de dano fisico."<<std::endl;
    delete this;
}

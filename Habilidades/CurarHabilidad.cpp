//
// Created by Asus ROG on 18/06/2024.
//

#include "CurarHabilidad.h"
#include <iostream>

// Contructor default
CurarHabilidad::CurarHabilidad(){
    this->cura = 0;
}

// Constructor por parametros
CurarHabilidad::CurarHabilidad(int nivel, int dano) : Habilidad(nivel) {
    this->cura = cura;
}

//Getters
int CurarHabilidad::GetCura() const{
    return cura;
}

//Setters
void CurarHabilidad::SetCura(int Ncura){
    this -> cura = Ncura;
}

//Funciones presentarse
void CurarHabilidad::Usar() {
    std::cout<<"Se uso la curacion."<<std::endl;
}

//Funciones para destruir
CurarHabilidad::~CurarHabilidad(){
    std::cout<<"Cura eliminada"<<std::endl;
}

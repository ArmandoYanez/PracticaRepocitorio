//
// Created by Asus ROG on 18/06/2024.
//

#include "Configracion.h"

// Contructor default
Configracion::Configracion(){
    this->resolucion = 720;
    this->volumen = 80;
    this->dificultad = "Normal";
}

// Constructor por parametros
Configracion::Configracion(float resolucion, float volumen, std::string dificultad) {
    this->resolucion = resolucion;
    this->volumen = volumen;
    this->dificultad = dificultad;
}

//Funciones para destruir
Configracion::~Configracion(){
    std::cout<<"Configuracion eliminada"<<std::endl;
}

//Getters
float Configracion::GetResolucion() const{
    return resolucion;
}

float Configracion::GetVolumen() const{
    return volumen;
}

std::string Configracion::Getdificultad() const{
    return dificultad;
}


//Setters
void Configracion::SetResolucion(float Nresolucion){
    this -> resolucion = Nresolucion;
}

void Configracion::SetVolumen(float Nvolumen){
    this -> volumen = Nvolumen;
}

void Configracion::Setdificultad(std::string Ndificultad){
    this -> dificultad = Ndificultad;
}

//Metodos
void Configracion::mostrarConfi(){
    std::cout<<"Configuracion actual: "<<std::endl;
    std::cout<<"Volumen: " << volumen << std::endl;
    std::cout<<"Resolucion: " << resolucion << std::endl;
    std::cout<<"Dificultad: " << dificultad << std::endl;
}
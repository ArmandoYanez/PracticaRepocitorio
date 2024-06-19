//
// Created by Asus ROG on 09/04/2024.
//

#include "Personaje.h"
#include <iostream>

// Contructor default
Personaje::Personaje(){
    this->nombre = "N/A";
    this->nivel = 0;
    this->vida = 0;
    this->velocidad = 0;
}

// Constructor por parametros
Personaje::Personaje(std::string nombre, int nivel, float vida, float velocidad,std::vector<Habilidad*> vHabilidades) {
    this->nombre = nombre;
    this->nivel = nivel;
    this->vida = vida;
    this->velocidad = velocidad;
    this->vHabilidades = vHabilidades;
}

//Getters
std::string Personaje::GetNombre() const{
    return nombre;
}

 int Personaje::GetNivel() const{
    return nivel;
}

float Personaje::GetVida() const{
    return vida;
}

float Personaje::GetVelocidad() const{
    return velocidad;
}

//Setters
void Personaje::SetNombre(std::string Nnombre){
    this -> nombre = Nnombre;
}

void Personaje::SetNivel(int Nnivel){
    this -> nivel = Nnivel;
}

void Personaje::SetVida(float Nvida){
    this -> vida = Nvida;
}

void Personaje::SetVelocidad(float Nvelocidad){
    this -> velocidad = Nvelocidad;
}

//Funciones para destruir
Personaje::~Personaje(){
    std::cout<<"Personaje eliminado"<<std::endl;
}

//Funciones presentarse
void Personaje::Ataque() {
    std::cout<<"Golpear"<<std::endl;
}

void Personaje::mostrarHa() {
   for(Habilidad* habilidad : vHabilidades){
       habilidad->Usar();
   }
}

void Personaje::AgregarHa(Habilidad* habilidad) {
    vHabilidades.push_back(habilidad);
}
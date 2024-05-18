//
// Created by Armando Yañez on 07/05/2024.
//

#ifndef LECTURA_GUARDARDATOS_H
#define LECTURA_GUARDARDATOS_H
#include <iostream>
#include <fstream>
#include <string>

//Libreria para verificar correo electronico
#include <regex>


struct Persona {
    std::string nombre;
    int edad;
    std::string correo;
};

bool CorreoElectronicoValido(const std::string &gmail){
    //Validacion de correo usando rengex
    std::regex regexCorreo("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

    return std::regex_match(gmail, regexCorreo);
}

void GuardarDatos(){
    // Creación de estructura persona
    Persona p1;

    std::cout << "Ingresa tu nombre completo: ";
    std::getline(std::cin >> std::ws, p1.nombre);
    std::cout << std::endl;

    std::cout << "Ingresa tu edad: ";
    std::cin >> p1.edad;
    std::cout << std::endl;

    std::cout << "Ingresa tu correo electronico: ";
    std::cin >> p1.correo;
    if (!CorreoElectronicoValido(p1.correo)) {
        std::cerr << "Correo electronico no valido" << std::endl;
    }
    std::cout << std::endl;

    std::ofstream bd("BD.txt", std::ios::app); //Abre archivo
    if (!bd.is_open()) {
        std::cerr << "No es posible abrir el archivo" << std::endl;
        return;
    }

    bd << p1.nombre << "\r\n";
    bd << p1.edad << "\r\n";
    bd << p1.correo << "\r\n";
    bd <<  "\r\n"; //Division para creacion de otra persona

    bd.close();

    // Leer datos
    std::ifstream bdr("BD.txt"); // Abre el archivo en modo lectura
    if (!bdr.is_open()) {
        std::cerr << "No es posible abrir el archivo" << std::endl;
        return;
    }
    std::string linea;
    while (std::getline(bdr, linea)) {
        std::cout << linea << std::endl;
    }
    bdr.close();
}


#endif //LECTURA_GUARDARDATOS_H

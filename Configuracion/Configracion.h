//
// Created by Asus ROG on 18/06/2024.
//

#ifndef EJERCICIOS_CONFIGRACION_H
#define EJERCICIOS_CONFIGRACION_H
#include <iostream>

class Configracion {
public:

    //Constructor default implicito
    Configracion();

    //Constructor Explicitp
    Configracion(float resolucion, float volumen, std::string dificultad);

    //Destructor
    ~Configracion();

    //Getters
    float GetResolucion() const;

    float GetVolumen() const;

    std::string Getdificultad() const;

    //Setters
    void SetResolucion(float Nresolucion);

    void SetVolumen(float Nvolumen);

    void Setdificultad(std::string Ndificultad);

    //Metodo para mostrar toda la info
    void mostrarConfi();


private:
    float resolucion;
    float volumen;
    std::string dificultad;
};


#endif //EJERCICIOS_CONFIGRACION_H

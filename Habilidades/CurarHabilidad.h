//
// Created by Asus ROG on 18/06/2024.
//

#ifndef EJERCICIOS_CURARHABILIDAD_H
#define EJERCICIOS_CURARHABILIDAD_H
#include "Habilidad.h"

class CurarHabilidad : public Habilidad{
public:
    //Constructor default implicito
    CurarHabilidad();

    //Constructor Explicito
    CurarHabilidad(int nivel, int cura);

    //Destructor
    //Para que puedan ejecturase en clases hijas con variaciones.
    ~CurarHabilidad();

    //Getters
    int GetCura() const;

    //Setters
    void SetCura(int Ndano);

    //Funcion
    void Usar() override;

private:
    int cura;
};


#endif //EJERCICIOS_CURARHABILIDAD_H

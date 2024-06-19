//
// Created by Asus ROG on 18/06/2024.
//

#ifndef EJERCICIOS_HABILIDAD_H
#define EJERCICIOS_HABILIDAD_H


class Habilidad {
public:
    //Constructor default implicito
    Habilidad();

    //Constructor Explicitp
    Habilidad(int nivel);

    //Destructor
    //Para que puedan ejecturase en clases hijas con variaciones.
    virtual ~Habilidad();

    //Getters
    int GetNivel() const;

    //Setters
    void SetNivel(int Nnivel);

    //Funcion
    virtual void Usar();

private:
    int nivel;
};


#endif //EJERCICIOS_HABILIDAD_H

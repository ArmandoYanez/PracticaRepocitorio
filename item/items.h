//
// Created by Asus ROG on 18/06/2024.
//

#ifndef EJERCICIOS_ITEMS_H
#define EJERCICIOS_ITEMS_H
#include <string>

class items {
public:
//Constructor default implicito
    items();

    //Constructor Explicitp
    items(std::string nombre);

    //Destructor
    //Para que puedan ejecturase en clases hijas con variaciones.
    virtual ~items();

    //Getters
    std::string GetNombre() const;

    //Setters
    void SetNombre(std::string Nnombre);


    //Metodos
    virtual void Usar();

private:
    std::string nombre;
};


#endif //EJERCICIOS_ITEMS_H

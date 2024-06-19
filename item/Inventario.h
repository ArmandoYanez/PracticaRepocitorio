//
// Created by Armando on 11/06/2024.
//

#ifndef EJERCICIOS_INVENTARIO_H
#define EJERCICIOS_INVENTARIO_H
#include <vector>
#include <string>
#include "items.h"

class Inventario {
public:

    //Constructor implicito
    Inventario();

    //Constructor Explicito
    Inventario( std::vector<std::string> inventario, std::vector<items*> conjuntoItems);

    //Destructor
    ~Inventario();

    void anadir(std::string itemNew);

    //Para añadir pociones o armas
    void anadirAP(items* newItem);

    void eliminar(std::string itemAEliminar);

    void mostrar();

private:
    std::vector<std::string> inventario;

    //Se agrega vector para guardar items
    std::vector<items*> conjuntoItems;
};


#endif //EJERCICIOS_INVENTARIO_H

//
// Created by Armando on 11/06/2024.
//

#include "Inventario.h"
#include <iostream>
#include <algorithm>

Inventario::Inventario() {

}

// Constructor por parametros
Inventario::Inventario(std::vector<std::string> inventario, std::vector<items*> conjuntoItems) {
    this->inventario = inventario;
    this->conjuntoItems = conjuntoItems;
}

//metodo añadir
void Inventario::anadir(std::string itemNew) {
   inventario.push_back(itemNew);
   std::cout<<"Nuevo item agregado."<<std::endl;
}

//metodo añadir armas o pocion
void Inventario::anadirAP(items* newItem) {
    conjuntoItems.push_back(newItem);
    std::cout<<"Nuevo item agregado."<<std::endl;
}

void Inventario::mostrar() {
    //Mostrar pot formas de iterador
    /*
    std::cout<<"Inventario:"<<std::endl;
    for (size_t i = 0; i < inventario.size(); ++i) {
        std::cout << "item " << i+1 << ": " << inventario[i] << std::endl;
    }*/
    std::cout<<"Items disponibles: "<<std::endl;
    for (std::string& item : inventario){
        std::cout<<item<<std::endl;
    }
    std::cout<<std::endl;

    std::cout<<"Armas y pociones disponibles: "<<std::endl;
    for (items* itemc : conjuntoItems){
        std::cout<<itemc->GetNombre()<<std::endl;
    }
}

void Inventario::eliminar(std::string itemAEliminar) {
    //Forma iterador
    /*
    for (int i = 0; i < inventario.size(); i++) {
        if (inventario[i] == itemAEliminar) {
            std::cout << "Elemento " << inventario[i] << " eliminado" << std::endl;
            inventario.erase(inventario.begin() + i);
        }*/

    auto iterador = std::find(inventario.begin(), inventario.end(),itemAEliminar);
    auto iterador2 = std::find_if(conjuntoItems.begin(), conjuntoItems.end(),
                                  [&itemAEliminar](items* item) {
                                      return item->GetNombre() == itemAEliminar;
                                  });

    if (iterador != inventario.end()) {
        std::cout << "Elemento " << *iterador << " eliminado" << std::endl;
        inventario.erase(iterador);
    } else if(iterador2 != conjuntoItems.end()){
        std::cout << "Item " << (*iterador2)->GetNombre() << " eliminado" << std::endl;
        conjuntoItems.erase(iterador2);
    }else {
        std::cout << "Item no encontrado" << std::endl;
    }
}

//Funciones para destruir
Inventario::~Inventario(){
    std::cout<<"Inventario eliminado"<<std::endl;
}
#include <iostream>
#include "Characters/Personaje.h"
#include "Characters/Guerrero.h"
#include "Characters/Magos.h"
#include "Enemigos/Orcos.h"
#include "Enemigos/Goblin.h"
#include "item/Inventario.h"
#include "Habilidades/Habilidad.h"
#include "Habilidades/CurarHabilidad.h"
#include "Habilidades/BolaDeFuego.h"
#include "Configuracion/Configracion.h"
#include "item/Arma.h"
#include "item/Pocion.h"

int main() {
    //Creamos vector.
    std::vector<Habilidad *> vHabilidades;

    //Rellenado de forma manual.
    Habilidad *cura = new CurarHabilidad();
    vHabilidades.push_back(cura);

    Guerrero *paul = new Guerrero("Paul", 1, 100, 1, vHabilidades, "Espada", 100);

    //Se puede rellenar manualmente o con el metodo agregar.
    Habilidad *bola = new BolaDeFuego();
    paul->AgregarHa(bola);

    paul->mostrarHa(); //Para mostrar habilidades.

    //Funciones para comprobar el funcionamiento del inventario.
    Magos *pau2 = new Magos("pepe",2,2,2,vHabilidades,"firebol",23);

    pau2->anadir("carne");
    pau2->mostrar();
    pau2->eliminar("carne");

    //Pruebas ded enemigos
    Orcos *orquin = new Orcos;
    Goblin *goblini = new Goblin;

    orquin->RecibirDano(10);
    goblini->RecibirDano(10);

    //Creamos vector para items
    std::vector<items *> vitems;
    items *espadaSuperMortal = new Arma("Espada mortal",5);
    items *pocionAlientoAcola = new Pocion("Pocion del diablo",5);


    //Añadir de forma manual
    vitems.push_back(espadaSuperMortal);

    Inventario *inventario = new Inventario({"Espada", "Poción", "Escudo"}, vitems);

    //llenar con metodo añadir
    inventario->anadirAP(pocionAlientoAcola);

    inventario->eliminar("Pocion del diablo");

    inventario->anadir("carne");
    inventario->mostrar();
    inventario->eliminar("Espada");

    //Prueba item
    espadaSuperMortal->Usar();
    pocionAlientoAcola->Usar();

    //Pruebas de la clase configuracion
    Configracion *confi = new Configracion();

    //Se pueden mostrasr con la funcion mostrar.
    confi->mostrarConfi();

    //O imprimir usando getters
    std::cout<<confi->GetResolucion()<<std::endl;

    //Se puede editar usando los setters
    //Nueva resolucion de 1080:
    confi->SetResolucion(1080);

    //Vaciar memoria
    delete confi;
    delete inventario;
    delete espadaSuperMortal;
    delete pocionAlientoAcola;
    delete cura;
    delete bola;
    delete orquin;
    delete goblini;
    delete paul;
    delete pau2;
}

//Crear clase abstracta personaje de videojuego

//Clase personaje de vieojuego - Guerro/mago - 4 atributos, 2 y 2, virtual ataques

//Clase iventario (privado y publico)
//(mostrar) un solo atributo(vector),añadir,eliminar,mostrar

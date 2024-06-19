cmake_minimum_required(VERSION 3.26)
project(Ejercicios)

set(CMAKE_CXX_STANDARD 17)

add_executable(Ejercicios main.cpp
        Characters/Personaje.h
        Characters/Personaje.h
        Characters/Personaje.cpp
        Characters/Magos.cpp
        Characters/Magos.h
        Characters/Guerrero.h
        Characters/Guerrero.cpp
        Enemigos/Enemigos.h
        Enemigos/Enemigos.cpp
        Enemigos/Orcos.cpp
        Enemigos/Orcos.h
        Enemigos/Goblin.cpp
        Enemigos/Goblin.h
        item/Inventario.cpp
        item/Inventario.h
        Habilidades/Habilidad.cpp
        Habilidades/Habilidad.h
        Habilidades/CurarHabilidad.h
        Habilidades/CurarHabilidad.cpp
        Habilidades/BolaDeFuego.h
        Habilidades/BolaDeFuego.cpp
        Configuracion/Configracion.h
        Configuracion/Configracion.cpp
        item/items.h
        item/items.cpp
        item/Arma.cpp
        item/Arma.h
        item/Pocion.cpp
        item/Pocion.h

)

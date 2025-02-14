#include "enviador.h"
#include <iostream>

int main() {
    std::cout << suma(1, 2) << std::endl;
    return 0;
}

//Se crea el <header.h> para que el main pueda acceder a las funciones de la libreria
//Luego se crea ese mismo header pero en formato .cpp para que se pueda compilar
//Finalmente, se crea el main que llama a la funcion de la libreria y la imprime en pantalla
//Se compila g++ main.cpp enviador.cpp -o main.exe
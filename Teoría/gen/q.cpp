#include <iostream>

int main(){
    int x;
    // >> es el operador de extracción y sirve para leer de la entrada estándar
    // std:cin es la entrada de caracteres
    std::cout << "Dime en qué número estás pensando: ";
    std::cin >> x;
    std::cout << "Tu número es: " << x << "\n";
    //Para ejecutarlo desde la consola <nombreArchivo>.exe
    return 0;
}
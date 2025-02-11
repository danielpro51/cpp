#include <iostream> // sirve para imprimir en pantalla y leer de ella
// std:: es el header file que contiene la definición de cout y endl
int main(){
    int x = 5;
    std::cout << "Hello word" << std::endl; //endl = fin de linea
    std::cout << "gg\n"; //\n = fin de linea
    // << es el operador de inserción y sirve para imprimir en pantalla
    std::cout << "x = " << x << std::endl; //Cómo aquí ya terminó no se debería poner, pero es opcional
    //std:endl es una opción; pero "\n" cumpliría la misma función
    return 0;
}

/*
Cargar y actualizar archivo .exe
g++ -o <programa>.cpp <programa>.exe
*/
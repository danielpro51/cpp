#include <iostream>
#include <string> //Permite el uso de std::string y std::getline

int main(){
    std::string a {};
    std::cout << "Dime una palabra: ";
    //std::cin >> a; //Lee una palabra y se detienen en el primer espacio
    std::getline(std::cin >> std::ws, a); //Lee una línea completa
    // std::ws es una función manipuladora que elimina los espacios en blanco a std::cin
    int a = std::string("Hola").length();
}
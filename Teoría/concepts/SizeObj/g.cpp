//void significa vacío, sin tipo
//No puede declararse una variable de tipo void
//Pero sí a las funciones que no devuelven ningún valor
//int main(void); es desaconsejado usarlo porque no es necesario

//boolean 1 byte

//char 1 byte
//wchar_t 2 bytes
//char16_t 2 bytes
//char32_t 4 bytes

//short 2 bytes
//int 4 bytes
//long 4 bytes
//long long 8 bytes

//float 4 bytes
//double 8 bytes
//long double 12 bytes

#include <iostream>

int main(){
    std::cout << "Tamaño de boolean: " << sizeof(bool) << " bytes" << "\n";
    std::cout << "Tamaño de char: " << sizeof(char) << " bytes" << "\n";
    std::cout << "Tamaño de wchar_t: " << sizeof(wchar_t) << " bytes" << "\n";
    std::cout << "Tamaño de char16_t: " << sizeof(char16_t) << " bytes" << "\n";
    std::cout << "Tamaño de char32_t: " << sizeof(char32_t) << " bytes" << "\n";
    std::cout << "Tamaño de short: " << sizeof(short) << " bytes" << "\n";
    std::cout << "Tamaño de int: " << sizeof(int) << " bytes" << "\n";
    std::cout << "Tamaño de long: " << sizeof(long) << " bytes" << "\n";
    std::cout << "Tamaño de long long: " << sizeof(long long) << " bytes" << "\n";
    std::cout << "Tamaño de float: " << sizeof(float) << " bytes" << "\n";
    std::cout << "Tamaño de double: " << sizeof(double) << " bytes" << "\n";
    std::cout << "Tamaño de long double: " << sizeof(long double) << " bytes" << "\n";
    return 0;
}
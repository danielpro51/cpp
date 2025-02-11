#include <iostream>

//void significa que la función no devuelve ningún valor
//Opción 1
/*void DosVecesX(int x){
    std::cout << x << " dos veces es " << x*2 << "\n";
}*/
//Opción 2
void DosVecesX(int x);
int pedirValor(int x){
    std::cout << "Dime un número entero: ";
    std::cin >> x;
    return x;
}
int main(){
    int x{};
    DosVecesX(pedirValor(x));
    return 0;
}
//Opción 2
void DosVecesX(int x){
    std::cout << x << " dos veces es " << x*2 << "\n";
}
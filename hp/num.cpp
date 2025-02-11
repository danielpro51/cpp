#include <iostream>

//void significa que la función no devuelve ningún valor
void DosVecesX(int x){
    std::cout << x << " dos veces es " << x*2 << "\n";
}
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
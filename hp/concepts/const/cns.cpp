//Las constantes son variables que no pueden ser modificadas una vez que han sido declaradas. 
//Se declaran con la palabra clave const.
//Se puede poner const dentro de una función para que una variable no pueda ser modificada dentro de la función.

/*
    voidPrint(const int x){
        x = 10; //Error: no se puede modificar una constante
        std::cout << x << std::endl;
    }

*/
/*
    int main(){
    const double gravedad {9.8};
    int edad;
    const int edadMaxima = {edad + 10};
    //edadMaxima = 30; //Error: no se puede modificar una constante

    }
*/
//Constant expression es una expresión que se evalúa en tiempo de compilación
//constexpr
/*
    int main(){
    constexpr double gravedad {9.8}; //Porque está en tiempo de compilación
    int edad;
    const int edadMaxima = {edad + 10};//Porque está en tiempo de ejecución
    //edadMaxima = 30; //Error: no se puede modificar una constante

    }
*/
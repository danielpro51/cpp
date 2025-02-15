//Las conversiones entre tipos implícitas pueden ser peligrosas, ya que pueden perder información.
//Se pueden hacer conversiones explícitas para evitar problemas.
// safe_cast<tipo_dato>(variable)
/*
    void imprimir(int x){
        std::cout << x;
    }
    int main(){
        double x {5.5};
        imprimir(x); //Error, se hará una conversión implícita
        imprimir(static_cast<int>(x)); //Correcto; se hace una conversión explícita asumiendo el riesgo
        return 0;
    }
*/
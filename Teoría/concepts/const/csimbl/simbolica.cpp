//Las constantes simbólicas son constantes que se pueden 
//definir en tiempo de compilación y que se pueden usar en cualquier parte del programa.

/*
    int aforoMax {salas * 30}; //No hay contexto
    setMax(30);
*/
/*
    #define maxAforo 30 
    //El preprocesador no resuelve las macros sino justa hasta la fuente de compilación
    //Dificultad de depuración
    //No usar #define por ello
    int aforoMax {salas * maxAforo}; //Hay contexto
*/

//La solución es usar constexpr para darle un contexto a la constante simbólicas
//constexpr int maxAforo {30};
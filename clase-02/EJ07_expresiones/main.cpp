/*
EXPRESIONES
    - Es una combinacion o no de valores que dan un resultado
    - cualquier cosa que pueda ser evaluada para dar un valor

INSTRUCION:
    - Una linea de codigo que se va ejecutar o no estas dependen de una condicion

SENTENCIA:
    - IF

***************************************************************
   EXPRESIONES NUMERICAS: con OPERADORES NUMERICOS

    - 7 + 5 => 12
    - M = 2
    - M + 5 => 7
    - M => 2
    - 7 => 7
    - (10 + 5) + 10 => 15 + 10 => 25

****************************************************************
    EXPRESIONES LOGICAS: con OPERADORES DE RELACION
    - valor de verdad (verdadero o falso) (true o false)(1 0)

    > mayor que
    >= mayor o igual que
    < menor que
    <= menor o igual que
    == igual
    != no igual - distinto


*****************************************************************
ESTRUCTURAS DE DATOS
    - ESTRUCTURA SECUENCIA
    - ESTRUCTURA SELECCION (DECISION O CONDICION)
        - SIMPLE
        - DOBLE
        - MULTIPLE

    - ESTRUCTURA REPETICION
        -


*/


#include <iostream>

using namespace std;

int main()
{
    // Declaracion variables
    bool expresion_logica1 = true;
    bool expresion_logica2 = false;

    // ESTRUCTURA DE SELECCION SIMPLE
    if(expresion_logica1){
        cout << "la expresion logica es verdadera" << endl;
    }

    // ESTRUCTURA DE SELECCION DOBLE
    if(expresion_logica){
        cout << "la expresion logica es verdadero" << endl;
    }
    else{
        cout << "la expresion logica es false" << endl;
    }
    return 0;
}

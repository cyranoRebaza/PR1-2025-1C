/*
EJERCICIO 03:
Dado dos numeros calcular e informar el mayor de ellos

********************************
IDENTIFICAR EL PROBLEMA:
    - buscar el mayor de dos numeros

ANALIS DATOS:

DE:
    - numero1, numero2
DS:
    - numeroMayor
OP:
    - usar un condicional doble


ESTRATEGIA:
    - Pedir los numeros
    - preguntar quien es mayor y mostrar

DIAGRAMACION:

CODIFICACION:

********************************


*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int numero1;
    int numero2;
    int numeroMayor;

    // pedir los numeros
    cout << "Ingrese numero: ";
    cin >> numero1;

    cout << "Ingrese numero: ";
    cin >> numero2;

    // pregunto
    if(numero1 > numero2){
        numeroMayor = numero1;
    }
    else{
        numeroMayor = numero2;
    }

    // mostrar
    cout << "El numero mayor es: " << numeroMayor << endl;

    system("pause");
    return 0;
}

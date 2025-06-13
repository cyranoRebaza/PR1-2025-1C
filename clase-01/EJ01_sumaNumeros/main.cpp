/*
EJERCIO1:
Calcular la suma de dos numeros

********************************
IDENTIFICAR EL PROBLEMA:
    - calcular la suma de dos numeros

ANALIS DATOS:

DE:
    - dos numeros
DS:
    - suma
OP:
    - suma = n1 + n2

ESTRATEGIA:
    - Pedir los datos
    - calcular la suma
    - mostrar la suma

DIAGRAMACION:

CODIFICACION:

********************************


TIPOS DE DATOS
    - int: almacenar numeros enteros
    - float: almacenar numeros reales
    - char: almacenar 1 caracter
    - bool: almacenar verdadero o falso

OPERADOR DE ASIGNACION (=)




*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int numero1;
    int numero2;
    int suma;

    // pedir los datos
    cout << "Ingrese numero: ";
    cin >> numero1;

    cout << "Ingrese numero: ";
    cin >> numero2;

    // calculo la suma
    suma = numero1 + numero2;

    // muestro
    cout << "La suma es: " << suma << endl;


    system("pause");
    return 0;
}

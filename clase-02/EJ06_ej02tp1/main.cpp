/*
EJERCICIO 06:(guia1-ej02)
Hacer un programa que solicite por teclado que se ingresen dos números
y luego guardarlos en dos variables distintas.

A continuación se deben intercambiar mutuamente los valores en ambas variables
y mostrarlos por pantalla.

Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables
usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.

************************************************************************************
IDENTIFICAR EL PROBLEMA:
    - Intercambiar valores de dos numeros

ANALIS DATOS:

DE:
    - num1
    - num2
DS:
    - num1
    - num2
OP:
    - num1 = 15
    - num2 = 10

    - aux = num1  --> aux = 15
    - num1 = num2 --> num1 = 10
    - num2 = aux --> num2 = 15


ESTRATEGIA:
    - pedir los dos numeros
    - guardar el valor de alguno de los numeros en una variable auxiliar
    - mostrar los numeros

DIAGRAMACION:

CODIFICACION:

************************************************************************************



*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int num1, num2, aux;

    // pedir los numeros
    cout << "Ingrese numero: ";
    cin >> num1;

    cout << "Ingrese numero: ";
    cin >> num2;

    cout << "**** antes ****" << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    // guardar el valor de alguno de los numeros en una variable auxiliar
    aux = num1;
    num1 = num2;
    num2 = aux;

    cout << "**** despues ****" << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;


    return 0;
}

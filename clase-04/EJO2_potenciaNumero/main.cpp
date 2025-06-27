/*
EJERCICIO 02: POTENCIA DE UN NUMERO
Dado un numero calcular su potencia

********************************************************
DE:
    - numero


DS:
    - potencia

PROCESO:
    --------------------------------------
    2 elevado al cubo     = 2 * 2 * 2 = 8

    potencia = 2 * 2
    potencia = 4 * 2
    potencia = 8


    potencia = 2 * 2
    potencia = potencia * 2
    potencia = 8

    potencia = 1
    potencia = potencia * 2
    potencia = potencia * 2
    potencia = potencia * 2

    --------------------------------------

    2 elevado a la cuarta = 2 * 2 * 2 * 2 = 16

    potencia = 2 * 2
    potencia = 4 * 2
    potencia = 8 * 2
    potencia = 16


    potencia = 2 * 2
    potencia = potencia * 2
    potencia = potencia * 2
    potencia = 16

    potencia = 1
    potencia = potencia * 2
    potencia = potencia * 2
    potencia = potencia * 2
    potencia = potencia * 2

    --------------------------------------

    resumen:

    - 2 elevado al cubo
    base = 2
    exponente = 3

    potencia = 1
    potencia = potencia * base --> repite tantas veces como exponente tenga

    - 2 elevado a la cuarta
    base = 2
    exponente = 4

    potencia = 1
    potencia = potencia * base --> repite tantas veces como exponente tenga


*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar variables
    int base;
    int exponente;
    int potencia;

    // Pedir los datos
    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese el exponente: ";
    cin >> exponente;

    // calculamos
    potencia = 1;
    for(int i= 1; i <= exponente; i ++){
        potencia = potencia * base;
    }

    // mostramos
    cout << "La potencia es: " << potencia << endl;

    system("pause");
    return 0;
}

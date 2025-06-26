/*
EJERCICIO 04: TP2-EJ09 - version 3
Hacer un programa para ingresar tres números y listar el máximo de ellos.


********************************************************
DE:
    - numero


DS:
    - maximo

PROCESO:
    - pedir 3 veces un numero  y guardamos como maximo al primero
    y la comparamos con los siguientes dos numeros mas vamos
    guardando el mayor



*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int numero;

    int maximo;

    // Pedir el primer numero y lo guardo como maximo
    cout << "Ingrese un numero: ";
    cin >> numero;

    maximo = numero;

    // Pedir el segundo numero y pregunto si es mayor que el maximo
    cout << "Ingrese un numero: ";
    cin >> numero;

    if(numero > maximo){
        maximo = numero;
    }

    // Pedir el tercer numero y pregunto si es mayor que el maximo
    cout << "Ingrese un numero: ";
    cin >> numero;

    if(numero > maximo){
        maximo = numero;
    }

    // muestro
    cout << "El maximo es: " << maximo << endl;

    system("pause");
    return 0;
}

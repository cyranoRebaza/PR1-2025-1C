/*
EJERCICIO 04: TP2-EJ09 -
Hacer un programa para ingresar tres números y listar el máximo de ellos.


********************************************************
DE:
    - num1
    - num2
    - num3

DS:
    - maximo

PROCESO:
    - comparo num1 con num2 y guardo cual es el maximo
    - comparo el maximo con el num3, si es mayor num3, actualizo el valor de maximo



*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int num1;
    int num2;
    int num3;

    int maximo;

    // Pedir los datos
    cout << "Ingrese un numero: ";
    cin >> num1;

    cout << "Ingrese un numero: ";
    cin >> num2;

    cout << "Ingrese un numero: ";
    cin >> num3;

    // pregunto
    if(num1 > num2){
        maximo = num1;
    }
    else{
        maximo = num2;
    }

    if(num3 > maximo){
        maximo = num3;
    }

    // muestro
    cout << "El maximo es: " << maximo << endl;

    system("pause");
    return 0;
}

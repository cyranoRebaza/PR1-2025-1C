/*
EJERCICIO 04: TP2-EJ09 - version 4 - usando for
Hacer un programa para ingresar tres números y listar el máximo de ellos.

NOTA: SUPONER QUE LOS VALORES INGRESADOS SON POSITIVOS
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

    int maximo = 0;

    // Pedir los tres numeros usando un for
    for(int i = 0; i < 3; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if(numero > maximo)
        {
            maximo = numero;
        }

    }


    // muestro
    cout << "El maximo es: " << maximo << endl;

    system("pause");
    return 0;
}

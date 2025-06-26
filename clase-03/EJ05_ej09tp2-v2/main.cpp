/*
EJERCICIO 04: TP2-EJ09 - version 2
Hacer un programa para ingresar tres números y listar el máximo de ellos.


********************************************************
DE:
    - num1
    - num2
    - num3

DS:
    - maximo

PROCESO:
    - tomo a n1 como maximo y lo muestro
    sino
    tomo al n2 de lo contrario el n3



*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int num1;
    int num2;
    int num3;



    // Pedir los datos
    cout << "Ingrese un numero: ";
    cin >> num1;

    cout << "Ingrese un numero: ";
    cin >> num2;

    cout << "Ingrese un numero: ";
    cin >> num3;

    // pregunto
    if((num1 > num2) && (num1 > num3))
    {
        cout << "El maximo es: " << num1 << endl;
    }
    else
    {
        if(num2 > num3)
        {
            cout << "El maximo es: " << num2 << endl;
        }
        else
        {
            cout << "El maximo es: " << num3 << endl;
        }
    }



    system("pause");
    return 0;
}

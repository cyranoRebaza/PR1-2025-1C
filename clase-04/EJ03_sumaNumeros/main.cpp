/*
EJERCICIO 03:
Hacer un programa donde se ingrese 10 numeros y muestre la suma de todos ellos
********************************************************
DE:
    - 10 numeros


DS:
    - sumaTotal

PROCESO:
    - sumaTotal = n1 + n2 + ..... + n10

    suma = 0
    suma = suma + numero --> repetido tantas veces la cantidad de numeros

ESTRATEGIA:
    repetir 10 veces
    - Pedir un numero
    - acumular dicho numero

    despues
    - mostrar la suma





*/

#include <iostream>

using namespace std;

int main()
{
    // Declaracion variables
    int numero;
    int sumaTotal;

    // inicializamos suma
    sumaTotal = 0;

    // calculamos
    for(int i = 1; i <= 10; i++)
    {
        // pedir el numero
        cout << "Ingrese un numero: ";
        cin >> numero;

        // acumulamos
        sumaTotal = sumaTotal + numero;
    }

    // mostrar
    cout << "La suma total es: " << sumaTotal << endl;

    system("pause");
    return 0;
}

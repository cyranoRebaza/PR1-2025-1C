/*
EJERCICIO 01: TP2-EJ13 - version 2
Hacer un programa para ingresar tres números distintos y listarlos ordenados de menor a mayor.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
Si N1=8, N2=6, N3=10 ó  N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
Si N1=6, N2=8, N3=10 ó  N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
Si N1=6, N2=10, N3=8 ó  N1=10, N2=6, N3=8. Se muestra: 6, 8, 10.

********************************************************
DE:
    -n1, n2, n3

DS:
    - menor, medio, mayor

PROCESO:
    - n1, n2, n3
    - n1, n3, n2

    - n2, n1, n3
    - n2, n3, n1

    - n3, n1, n2
    - n3, n2, n1




*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int n1, n2, n3;
    int menor, medio, mayor;

    // Pedir los datos
    cout << "Ingrese numero: ";
    cin >> n1;

    cout << "Ingrese numero: ";
    cin >> n2;

    cout << "Ingrese numero: ";
    cin >> n3;

    // calculo el menor
    if( (n1 < n2) && (n1 < n3))
    {
        menor = n1;
    }
    else
    {
        if((n2 < n1) && (n2 < n3))
        {
            menor = n2;
        }
        else
        {
            if((n3 < n1) && (n3 < n2))
            {
                menor = n3;
            }
        }
    }

    // calculo el mayor
    if( (n1 > n2) && (n1 > n3))
    {
        mayor = n1;
    }
    else
    {
        if((n2 > n1) && (n2 > n3))
        {
            mayor = n2;
        }
        else
        {
            if((n3 > n1) && (n3 > n2))
            {
                mayor = n3;
            }
        }
    }

    // calculo el medio
    if( (n1 > n2) && (n1 < n3))
    {
        medio = n1;
    }
    else{
        if((n1 > n3) && (n1 < n2)){
            medio = n1;
        }
    }

    if((n2 > n1) && (n2 < n3)){
        medio = n2;
    }
    else{
        if((n2 > n3) && (n2 < n1)){
            medio = n2;
        }
    }

    if((n3 > n1) && (n3 < n2)){
        medio = n3;
    }
    else{
        if((n3 > n2) && (n3 < n1)){
            medio = n3;
        }
    }




    // mostrar
    cout << "Numeros ordenados: " << menor << ", " << medio << ", " << mayor << endl;

    system("pause");
    return 0;
}

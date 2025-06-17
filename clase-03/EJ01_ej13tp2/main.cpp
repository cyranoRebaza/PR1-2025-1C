/*
EJERCICIO 01: TP2-EJ13
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

    // calculos
    if( (n1 < n2) && (n1 < n3))
    {
        menor = n1;

        if(n2 < n3)
        {
            medio = n2;
            mayor = n3;
        }
        else
        {
            medio = n3;
            mayor = n2;
        }

    }
    else
    {
        // hasta aqui sabemos que el n1 no es menor
        if(n2 < n3)
        {
            menor = n2;

            if(n1 < n3)
            {
                medio = n1;
                mayor = n3;
            }
            else{
                medio = n3;
                mayor = n1;
            }

        }
        else{
            // hasta aqui sabememos que n1 no es menor y que n2 tampoco es el menor
            menor = n3;
            if(n1 < n2){
                medio = n1;
                mayor = n2;
            }
            else{
                medio = n2;
                mayor = n1;
            }
        }

    }



    // mostrar
    cout << "Numeros ordenados: " << menor << ", " << medio << ", " << mayor << endl;

    system("pause");
    return 0;
}

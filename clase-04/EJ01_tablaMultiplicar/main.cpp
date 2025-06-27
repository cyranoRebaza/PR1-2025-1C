/*
EJERCICIO 01: TABLA DE MULTIPLICAR
Se ingresa un numero y debe mostrar la tabla de multiplicar
del 1 al 10 de dicho numero

********************************************************
DE:
    - numero


DS:
    - la tabla de multiplicar

PROCESO:
    numero * 1
    numero * 2
    ...
    numero * 10




*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int numero;

    // Pedir el numero
    cout << "Ingrese un numero: ";
    cin >> numero;

    // calcular


//    cout << numero << " * " << " 1" << "  = " << numero * 1 << endl;
//    cout << numero << " * " << " 2" << "  = " << numero * 2 << endl;
//    cout << numero << " * " << " 3" << "  = " << numero * 3 << endl;
//    cout << numero << " * " << " 4" << "  = " << numero * 4 << endl;
//    cout << numero << " * " << " 5" << "  = " << numero * 5 << endl;
//    cout << numero << " * " << " 6" << "  = " << numero * 6 << endl;
//    cout << numero << " * " << " 7" << "  = " << numero * 7 << endl;
//    cout << numero << " * " << " 8" << "  = " << numero * 8 << endl;
//    cout << numero << " * " << " 9" << "  = " << numero * 9 << endl;
//    cout << numero << " * " << " 10" << " = " << numero * 10 << endl;

    for(int i = 1; i <= numero; i++)
    {
        cout << numero << " * " << i << "  = " << numero * i << endl;
    }


    system("pause");
    return 0;
}

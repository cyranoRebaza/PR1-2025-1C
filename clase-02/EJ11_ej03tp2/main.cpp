/*
EJERCICIO 11: (GUIA2 - EJ03)
Hacer un programa que muestre si un numero es par o impar


*****************************************************
cuando un numero es par
    - cuando es divisible por 2

cuando un numero es divisible por otro
    -cuando al dividirlo el resto es cero


*****************************************************

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar variables
    int num1;

    // Pedir numero
    cout << "Ingrese numero: ";
    cin >> num1;

    // pregunto
    if(num1 % 2 == 0){
        cout << "Es un numero PAR" << endl;
    }
    else{
        cout << "Es un numero IMPAR" << endl;
    }
    system("pause");
    return 0;
}

/*
EJERCICIO 10: (GUIA2 - EJ01)- version 2
Hacer un programa donde se ingrese un numero y muestre si dicho numero es positivo
negativo o cero


*****************************************************
 ESTRATEGIA: IF ANIDADO  --> EL RESULTADO ES EXCLUYENTE

nota: el ejemplo como minimo hacer 1 pregunta


*****************************************************

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar variables
    int num1;

    // Pedir numero
    cout << "Ingrese un numero: ";
    cin >> num1;

    // positivo
    if(num1 > 0)
    {
        cout << "Es positivos" << endl;
    }
    else
    {
        // negativo
        if(num1 < 0)
        {
            cout << "Es negativo" << endl;
        }
        else{
            // cero
            cout << "Es cero" << endl;
        }
    }





    sytem("pause");
    return 0;
}

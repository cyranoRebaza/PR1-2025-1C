/*
EJERCICIO 10: (GUIA2 - EJ01)
Hacer un programa donde se ingrese un numero y muestre si dicho numero es positivo
negativo o cero


*****************************************************
 ESTRATEGIA: IF SECUENCIAL --> EL RESULTADO NO ES EXCLUYENTE

nota: el ejemplo como minimo hacer 3 preguntas


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
    if(num1 > 0){
        cout << "Es positivos" << endl;
    }

    // negativo
    if(num1 < 0){
        cout << "Es negativo" << endl;
    }

    // cero
    if(num1 == 0){
        cout << "Es cero"
    }


    sytem("pause");
    return 0;
}

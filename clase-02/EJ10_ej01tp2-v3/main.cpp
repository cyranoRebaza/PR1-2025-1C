/*
EJERCICIO 10: (GUIA2 - EJ01)- version 3
Hacer un programa donde se ingrese un numero y muestre si dicho numero es positivo
negativo o cero


*****************************************************
 ESTRATEGIA: IF ANIDADO con else if --> EL RESULTADO ES EXCLUYENTE

nota: el ejemplo como minimo hacer 1 pregunta como maximo 2 preguntas


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
        cout << "Es positivo" << endl;
    }
    else if(num1 < 0){
        cout << "Es negativo" << endl;
    }
    else{
        cout << "Es cero" << endl;
    }



    system("pause");
    return 0;
}

/*
EJERCICIO 01:
Hacer un programa para calcular e informar el area de un circulo

********************************
IDENTIFICAR EL PROBLEMA:
    - calcular el area de un circulo

ANALIS DATOS:

DE:
    - radio
DS:
    - areaCirculo
OP:
    - areaCirculo = PI * radio * radio


ESTRATEGIA:
    - Pedir  el radio
    - calcular el area
    - mostrar el area


DIAGRAMACION:

CODIFICACION:

********************************



*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    float radio;
    const float PI = 3.1416;

    float areaCirculo;

    // Pedir el radio
    cout << "Ingrese el radio: ";
    cin >> radio;

    // calcular area circulo
    areaCirculo = PI * radio * radio;

    // mostrar
    cout << "El area del circulo es: " << areaCirculo << endl;


    system("pause");
    return 0;
}

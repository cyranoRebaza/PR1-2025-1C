/*
EJERCICIO 02:
Dado el precio de un producto sin el iva, calcular e informar el valor
de venta

********************************
IDENTIFICAR EL PROBLEMA:
    - calcular el valor de la venta de un producto

ANALIS DATOS:

DE:
    - precioInicial
DS:
    - precioFinal
OP:
    - precioFinal = precioInicial + iva


ESTRATEGIA:
    - Pedir  el precio Inicial
    - calcular el precio final
    - mostrar el precio final


DIAGRAMACION:

CODIFICACION:

********************************



*/


#include <iostream>

using namespace std;

int main()
{
    // Declaracion variables
    float precioInicial;
    float precioFinal;

    float iva;

    const float porcentajeIva = 0.21;


    // pedir los datos
    cout << "Ingrese el precio inicial: ";
    cin >> precioInicial;

     // calcular el precio final
     iva = precioInicial * porcentajeIva;
     precioFinal = precioInicial + iva;

     cout << "El precio final es: " << precioFinal << endl;


    system("pause");
    return 0;
}

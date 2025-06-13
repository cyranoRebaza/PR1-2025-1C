/*
EJERCICIO 02:
Hacer un programa para calcular e informar el importe de una venta,
a partir del ingreso de una cantidad de unidades de alfajores.

El comercio vende cada caja de 12 alfajores a $1000,
y cada alfajor suelto a $ 100

********************************
IDENTIFICAR EL PROBLEMA:
    - Ingresar la cantidad de alfajores  y mostrar el importe de venta

ANALIS DATOS:

DE:
    - cantidadAlfajores
DS:
    - importeVenta
OP:
    - importeVenta = cantidadCajas * 1000 + sueltos * 100

    - sueltos = cantidadAlfajores % 12

    - cantidadCaja = cantidadAlfajores / 12


ESTRATEGIA:
    - Pedir la cantidad alfajores
    - calcular la cantidad de cajas
    - calcular los sueltos
    - calcular importe venta
    - mostrar el importe venta


DIAGRAMACION:

CODIFICACION:

********************************


OPERADORES BASICOS
    - Asignacion: (=)
    - Matematico: suma, resta, multiplicacion, division, resto division entera
    - relacionales: mayor, menor....
    - logicos: and, or, not




*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int cantidadAlfajores;
    int cantidadCajas;
    int sueltos;

    float importeVenta;

    // pedir la cantidad alfajores
    cout << "Ingrese la cantidad de alfajores: ";
    cin >> cantidadAlfajores;

    // calcular la cantidad de cajas
    cantidadCajas = cantidadAlfajores / 12;

    // calcular los alfajores sueltos
    sueltos = cantidadAlfajores % 12;

    // calcular importe venta
    importeVenta = (float)1000 * cantidadCajas + 100 * sueltos;

    // muestro el importe venta
    cout << "El importe de venta es: $ " << importeVenta << endl;




    system("pause");
    return 0;
}

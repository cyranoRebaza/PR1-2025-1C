/*
EJERCICIO 02:(guia1-ej15)
La amplitud t�rmica es la diferencia entre la temperatura m�xima y la temperatura m�nima en una zona y tiempo determinado.

Dada la temperatura m�xima y la temperatura m�nima de San Fernando de ayer, calcular y mostrar la amplitud t�rmica.

NOTA: El usuario ingresar� como temperatura m�xima un valor mayor o igual al de la temperatura m�nima.

************************************************************************************
IDENTIFICAR EL PROBLEMA:
    - calcular y mostrar la amplitud termica

ANALIS DATOS:

DE:
    - temperaturaMaxima
    - temperaturaMinima
DS:
    - amplitudTermica
OP:
    - amplitudTermica = temperaturaMaxima - temperaturaMinima


ESTRATEGIA:
    - Pedir la temperatura maxima y minima
    - calcular la amplitud termica
    - mostrar la amplitud termica

DIAGRAMACION:

CODIFICACION:

************************************************************************************



*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    float temperaturaMaxima;
    float temperaturaMinima;

    float amplitudTermica;

    // pedir datos
    cout << "Ingrese la temperatura maxima: ";
    cin >> temperaturaMaxima;

    cout << "Ingrese la temperatura minima: ";
    cin >> temperaturaMinima;

    // calcular amplitud termica
     amplitudTermica = temperaturaMaxima - temperaturaMinima;

     // mostrar
     cout << "La amplitud termica de la zona es: "  << amplitudTermica << endl;

    system("pause");
    return 0;
}

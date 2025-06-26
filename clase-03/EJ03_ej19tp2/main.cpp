/*
EJERCICIO 03: TP2-EJ19 -
El costo de un desarrollo de un proyecto de software se calcula en base al lenguaje que se necesita:

Nombre	Tipo	Valor hora
C/C++	'C'	    $ 7500
C#	    '#'	    $ 6100
Python	'P'	    $ 5400
Go	    'G'	    $ 5000

Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más al costo del proyecto.
Le solicitan un programa que permita calcular el costo total de un proyecto basado en la cantidad
de horas (int), el tipo de lenguaje (char) y si es urgente o no (bool)


********************************************************
DE:
    - cantidadHoras
    - tipoLenguaje
    - urgente

DS:
    - costoTotal

PROCESO:
    - costoTotal = costo * cantidadHoras
    - si es urgente --> costoTotal = costoTotal * 2.1



*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar variables
    int cantidadHoras;
    char tipoLenguaje;
    bool urgente;

    float costo;
    float costoTotal;

    // Pedir los datos
    cout << "Ingrese la cantidad horas: ";
    cin >> cantidadHoras;

    cout << "Ingrese tipo de lenguajes: (c/c++:'C', C#:'#', Python:'P', Go:'G' ): ";
    cin >> tipoLenguaje;

    cout << "Ingrese si urgente: (1-urgente,0- no urgente): ";
    cin >> urgente;

    switch(tipoLenguaje)
    {
    case 'C':
        costo = 7500;
        break;

    case '#':
        costo = 6100;
        break;

    case 'P':
        costo = 5400;
        break;

    case 'G':
        costo = 5000;
        break;

    }

    // calculo el costo total
    costoTotal = costo * cantidadHoras;

    // calculo el costo total si el proyecto es urgente
    if(urgente == 1){
        costoTotal = costoTotal * 2.2;
    }

    // mostrar
    cout << "El costo total del proyecto es: $ " << costoTotal << endl;




    system("pause");
    return 0;
}

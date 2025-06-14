/*
EJERCICIO 05:(guia1-ej01)
Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y
el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.

************************************************************************************
IDENTIFICAR EL PROBLEMA:
    - calcular y mostrar el sueldo trabajador

ANALIS DATOS:

DE:
    - horasTrabajadas
    - pagoHora
DS:
    - sueldo
OP:
    - sueldo = horasTrabajadas * pagoHora


ESTRATEGIA:
    - pedir horas trabajadas y el pago por hora
    - calcular el sueldo
    - mostrar el sueldo

DIAGRAMACION:

CODIFICACION:

************************************************************************************



*/


#include <iostream>

using namespace std;

int main()
{

    // Declarar las variables
    int horasTrabajadas;
    float pagoHora;

    float sueldo;

    // Pedir los datos
    cout << "Ingrese las horas trabajadas: ";
    cin >> horasTrabajadas;

    cout << "Ingrese el pago por hora: ";
    cin >> pagoHora;

    // Calcular el sueldo
    sueldo = horasTrabajadas * pagoHora;

    // Mostrar el sueldo
    cout << "El sueldo es: $ " << sueldo << endl;

    system("pause");
    return 0;

}

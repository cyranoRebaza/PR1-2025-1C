/*
EJERCICIO 02:(guia1-ej13)
Hacer un programa para un cajero automático para ingresar un importe a retirar y
convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a entregar.

Ejemplo A: Si el importe a retirar es $2500
se mostrará por pantalla que se deberán entregar
2 billetes de $1.000, 1 billete de $500,  0 billetes de $200 y 0 billetes de $100.

Ejemplo B: Si el importe a retirar es $3400
se mostrará por pantalla que se deberán entregar
3 billetes de $1.000, 2 billetes de $200, 0 billetes de $500 y 0 billetes de $100.

Ejemplo C: Si el importe a retirar es $300
se mostrará por pantalla que se deberán entregar
1 billete de $200, 1 billete de $100, 0 billetes de $1.000 y 0 billetes de $500.

Recordatorio. Considerar en todos los casos que el importe a retirar es en todos
los casos múltiplo de $100 ya que el cajero no cuenta con billetes de $50, $20 o $10.

************************************************************************************
IDENTIFICAR EL PROBLEMA:
    - el dinero que se retira de un cajero tiene que se multiplos de
    1000, 500, 200, 100

ANALIS DATOS:

DE:
    - dineroRetirar
DS:
    - billetes1000, billetes500, billetes200, billetes100
OP:
    -billetes1000 = billetesRetirar / 1000
    -restoDinero = billetesRetirar % 1000

    - billetes500 = restoDinero / 500
    - restoDinero = restoDinero % 500

    - billetes200 = restoDinero / 200
    - restoDinero = restoDinero % 200

    -billetes100 = restoDinero / 100


ESTRATEGIA:
    - Pedir  la cantidad de dinero a retirar
    - calcular los billetes1000, billetes500, billetes200 y billetes100
    - mostrar los billetes

DIAGRAMACION:

CODIFICACION:

************************************************************************************



*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar las variables
    int billetesRetirar;

    int billetes1000;
    int billetes500;
    int billetes200;
    int billetes100;

    int restoBilletes;


    // Pedir cantidad billetes a retirar
    cout << "Ingrese la cantidad de dinero a retirar: $ ";
    cin >> billetesRetirar;

    // calcular los billetes1000, billetes500, billetes200 y billetes100
    billetes1000 = billetesRetirar / 1000;
    restoBilletes = billetesRetirar % 1000;

    billetes500 = restoBilletes / 500;
    restoBilletes = restoBilletes % 500;

    billetes200 = restoBilletes / 200;
    restoBilletes = restoBilletes % 200;

    billetes100 = restoBilletes / 100;


    //mostrar los billetes
    cout << "cantidad de billetes de 1000: " << billetes1000 << endl;
    cout << "cantidad de billetes de 500 : " << billetes500 << endl;
    cout << "cantidad de billetes de 200 : " << billetes200 << endl;
    cout << "cantidad de billetes de 100 : " << billetes100 << endl;


    system("pause");
    return 0;
}

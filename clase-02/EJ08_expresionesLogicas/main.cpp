/*

****************************************************************
    EXPRESIONES LOGICAS: con OPERADORES DE RELACION
    - valor de verdad (verdadero o falso) (true o false)(1 0)


    > mayor que
    >= mayor o igual que
    < menor que
    <= menor o igual que
    == igual
    != no igual - distinto


*****************************************************************


*****************************************************************

*/


#include <iostream>

using namespace std;

int main()
{
    // Declarar variable tipo bool
    bool valor1 = true; // 1
    bool valor2 = 7;    // 1

    int valor3 = 10;   // 10

    // declarar variable tipo bool si inicializar
    bool valor4;
    bool valor5; // por defecto tiene el valor false (cero)

    valor4 = valor3 >= 10; // muestra 1 porque cumple la condicion



    cout << "valor 1: " << valor1 << endl;
    cout << "valor 2: " << valor2 << endl;
    cout << "valor 3: " << valor3 << endl;
    cout << "valor 4: " << valor4 << endl;
    cout << "valor 5: " << valor5 << endl;



    system("pause");
    return 0;
}

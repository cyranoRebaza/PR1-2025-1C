/*
EJERCICIO 09:
Ingresar un numero y ver si es mayor a cinco


*/

#include <iostream>

using namespace std;

int main()
{
    // Declarar variables
    int num1;

    // Pedir numero
    cout << "Ingrese un numero: ";
    cin >>num1;

    if(num1 > 5){
        cout << "El numero es mayor a 5" << endl;
    }
    else{
        cout << "El numero es menor o igual a 5" << endl;
    }

    system("pause");
    return 0;
}

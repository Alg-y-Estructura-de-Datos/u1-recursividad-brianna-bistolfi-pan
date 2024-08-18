/*Implementar una función recursiva que dado un número entero lo muestre de
forma invertida ej: 10523 de mostrar 32501. Dar aviso de error en caso de uso de
números negativos y mostrar primero el número a invertir y después el número
invertido.
*/

#include <iostream>

using namespace std;

void mostrarInvertido(int numero, int& invertido) { //numero = 123, invertido = 0
    /*Condición Base*/
    if (numero == 0) {
        return;
    }
        /*Código necesario*/
        invertido = invertido * 10 + numero % 10;    //invertido = 0*10 + 123 % 10 = 0 + 3 = 3
        /*Recursividad y Terminación*/               //invertido = 3*10 + 12 % 10 = 30 + 2 = 32
                                                     //invertido = 32*10 + 1 % 10 = 320 + 1 = 321
        mostrarInvertido(numero / 10, invertido);
    //mostrarInvertido(123/10 = 12 , 3)
    // mostrarInvertido(12/10,32)
    // mostrarInvertido(1/10, 321)
}

int main() {
    int numero ;
    cout<< "ingrese entero: " << endl;
    cin>>  numero;

    cout << "Número original: " << numero << endl;

    if ( numero <0 ){
        cout << "Error: Número negativo no permitido." << endl;
        return 1; // Salir del programa con error
    }

    int invertido = 0;
    mostrarInvertido(numero, invertido);

    cout << "Número invertido: " << invertido << endl;
    return 0;
}

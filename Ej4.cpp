/*Crear un programa que emplee recursividad para calcular el mayor de los
elementos de un vector de “n” tamaño dado por pantalla por el usuario.*/

#include <iostream>
#include <vector>
using namespace std;

int mayor(const vector<int>& vec, int n) { //vec[3] = { 4, 5, 6 } n=3
    //caso base:si el vector tiene un solo elemento, ese elemento es el mayor
if (n == 1) {
    return vec[0];
}
    //llamada recursiva: comparar el ultimo elemento con el mayor de los anteriores
    int maximo = mayor(vec, n-1); //n-1 es condicion de terminacion
// int maximo = mayor(vec, 3-1);
// int maximo = mayor(vec, 2-1);
// return vec[0];

    //int maximo = vec[0];; n = 2 ---- sigue el if
    //int maximo = 5 ---- sigue el if


    if (vec[n-1] > maximo){ //vec[2-1] > maximo // 6>5
        return vec[n-1];
    } else {
        return  maximo;
    }
}

int main () {
    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Ingrese los elementos del vector:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    // Llamar a la función recursiva para encontrar el mayor elemento
    int mayor = mayor(vec, n);
    cout << "El mayor elemento del vector es: " << mayor << endl;

    return 0;
}
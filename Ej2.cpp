/*Implementar una función recursiva que determine la suma de los “n” primeros
números naturales ej: para n=5 mostrar por pantalla 1+2+3+4+5 y luego el
resultado de la suma.
*/

#include <iostream>
using namespace std;

int sumarecursiva (int n) {
    // caso base
    if( n == 1) {
        cout << n; //imprimir el primer numero sin el signo +
        return 1;
    } else { //else opcional
        cout <<n << "+";
        //recursividad y terminacion
        return n + sumarecursiva(n-1);
    }
}


int main() {
int n;
    cout<<"ingrese entero"  << endl;
    cin>> n;
    int suma = sumarecursiva(n);
    cout << "= " <<suma << endl;

    return 0;
}

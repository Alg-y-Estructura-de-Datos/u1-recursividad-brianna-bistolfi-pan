/*Crear un programa que pida al usuario un número entero positivo "n" y un dígito
"d". Luego crear una función recursiva que determine si “d” está en “n”. Si está, la
función debe retornar verdadero y si no está debe retornar falso.
Ej.: si n=1323 y d = 5, retorna Falso y si d= 1 retorna verdadero.
*/

#include <iostream>

using namespace std;

bool verificar(int n, int d) {
    //caso base: si n es cero, hemos revisado todos los digitos y no encontramos d
    if ( n == 0 ) {
        return false;
    }
    //2 caso base:
    //si el digito actual ( n%10) es igual a 'd', retornar verdadero
        if ( n%10 == d) {
            return true;
        }
    //llamada recursiva con el numero sin el ultimodigito
        return  verificar(n/10, d);
    }


int main () {
    int n, d;

    cout<<"ingrese entero positivo n: "<<endl;
    cin>> n;
    cout<<"ingrese entero positivo d: "<<endl;
    cin>> d;

    bool resultado = verificar(n,d);
    cout<< resultado;
    return 0;
}
/*Crear un programa que pida al usuario un número entero positivo "n". Luego
implementar una función recursiva que cuente la cantidad de dígitos pares que
ocupan posiciones impares (identificándolas de izquierda a derecha) en "n". Ej.: si
el número es 22005 el resultado es 2, y si fuera 1414 el resultado es 0
*/
#include <iostream>

using namespace std;

int digitos(int n, int tamanionumero) { //22005
//caso base: si n es 0, no hay mas digito que revisar
if ( n == 0 ) {
    return 0;
}
    //verificar si la posicion actual es impar y el digito es par
int digitoactual = n%10; //resto = 5 de 22005
    if (tamanionumero%2 != 0 &&  digitoactual%2 == 0 ) { // 5 no es par, entonces va a la segunda llamada recursiva
        // Incrementar el contador y realizar la llamada recursiva
        return 1 + digitos(n/10, tamanionumero - 1 );

    } else {
        // Realizar la llamada recursiva sin incrementar el contador
        return digitos(n/10, tamanionumero - 1); //entro con 4, 2200
    }

}

int main() {
    int n;
    int tam = 4;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    // Contar dígitos pares en posiciones impares usando la función recursiva
    int resultado = digitos(n, tam);
    cout << "Cantidad de dígitos pares en posiciones impares: " << resultado << endl;

    return 0;
}

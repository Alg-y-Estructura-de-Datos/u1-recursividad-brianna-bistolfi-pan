/*Implemente una función para potencias enteras con recursividad. Definición
recursiva para elevar un número a una potencia: Un número elevado a la potencia
cero produce la unidad; la potencia de un número se obtiene multiplicándolo por
sí mismo elevando a la potencia menos uno. Por ejemplo:
3
2=3*(3
1)=3*[3*(3
0)]=3*(3*1)=9*/

#include <iostream>
using namespace std;
//condicion de terminacion : llegar a potencia cero



// Función recursiva para calcular la potencia
int potenciaRecursiva (int base, int exponente) { //B = 3 A LA EXPO = 2
    // Caso base: cualquier número elevado a la potencia 0 es 1
    if (exponente == 0) {
        return 1;
    } else {
        // Llamada recursiva: multiplica la base por la base elevada al exponente menos uno
        return base * potenciaRecursiva(base, exponente - 1); //return 3 * 3
    }

}
//



int main() {


int base, exponente;
    cout << "ingrese base" << endl;
    cin >> base;
    cout << "ingrese exponente" << endl;
    cin >> exponente;
    cout << base << " elevado a la potencia " << exponente << " es: ";
const int resultado = potenciaRecursiva(base, exponente);
    cout << resultado << endl;




    return 0;
}

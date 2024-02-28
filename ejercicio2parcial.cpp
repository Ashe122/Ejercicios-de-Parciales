//  Escribe un programa en C++ que solicite al usuario un número entero positivo n y muestre la suma detodos los números enteros desde 1 hasta n.
//Angelyn Judith Diaz Zeceña 
#include <iostream>

using namespace std;

int main() {
    // aqui se declara una variable
    int n;
    cout << "---hola usuario----: " << endl;
    cout << "Ingresa un numero entero positivo de n: ";
    cin >> n;
    if (n >= 0) {
        // aqui hace el calculo de los numeros
        int suma = 0;
        for (int i = 1; i <= n; ++i) {
            suma += i;
        }
        cout << "La suma de los numeros desde 1 hasta " << n << " es de: " << suma << endl;
    }
   

    return 0;
}


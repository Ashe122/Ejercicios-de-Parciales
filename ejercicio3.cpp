//Angelyn Judith Diaz Zeceña
#include <iostream>
using namespace std;
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false; 
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false; 
        }
    }

    return true; 
}
int main() {
    
    int numero;

    // se le pide al usuario que ingrese un número
    cout << "---Hola personita----- " << endl;
    cout << "Ingresa un numero entero: ";
    cin >> numero;
    // Aqui Llama a la función esPrimo y muestra un resultado
    if (esPrimo(numero)) {
        cout << numero << " es un numero primo." << endl;
    }
    else {
        cout << numero << " no es un numero primo." << endl;
    }

    return 0;
}

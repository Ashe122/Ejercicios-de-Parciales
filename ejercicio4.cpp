// Escribe un programa en C++ que calcule la raíz cuadrada de un número ingresado por el usuario utilizando la función sqrt() de la biblioteca cmath.Asegúrate de incluir la biblioteca correspondiente
//Angelyn Judith Diaz Zeceña
#include <iostream>
#include <cmath> // se utiliza para el  sqrt()

using namespace std;

int main() {
    // Aqui se declara la variable
    double numero;
    cout << "-----Hola personita----"<< endl;
    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero >= 0) {
        // aqui se calcula la raiz
        double raizCuadrada = sqrt(numero);

        cout << "La raiz cuadrada de " << numero << " es de: " << raizCuadrada << endl;
    }
  

    return 0;
}

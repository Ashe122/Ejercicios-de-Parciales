// Escribe un programa en C++ que calcule la ra�z cuadrada de un n�mero ingresado por el usuario utilizando la funci�n sqrt() de la biblioteca cmath.Aseg�rate de incluir la biblioteca correspondiente
//Angelyn Judith Diaz Zece�a
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

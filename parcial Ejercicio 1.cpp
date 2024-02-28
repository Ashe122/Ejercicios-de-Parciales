//Angelyn Judith Diaz Zeceña 
//5090-23-1407
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;
    
    int suma = a + b;
    int resta = a - b;
    int multiplicacion = a * b;

    if (b != 0) {
        float division = static_cast<float>(a) / b;

        cout << " ----Estos son los resultados-----" << endl;
       //Aqui se muestran los resultados de cada una de las operaciones aritmeticas
        cout << " Esta es la Suma: " << suma << endl;
        cout << "Esta es la Resta: " << resta << endl;
        cout << " Esta es la Multiplicacion: " << multiplicacion << endl;
        cout << "Esta es la Division: " << division << endl;
    }
   

    return 0;
}

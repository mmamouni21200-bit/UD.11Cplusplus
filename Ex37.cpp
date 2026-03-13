#include <iostream>
using namespace std;

int main() {
    int numero;

    // Demanem un número dins del rang 1-20
    do {
        cout << "Introdueix un número (mínim 1, màxim 20) per a la taula de multiplicar: ";
        cin >> numero;
    } while (numero < 1 || numero > 20);

    cout << "Taula de multiplicar del " << numero << ":\n";

    // Bucle per imprimir la taula del 1 al 10
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
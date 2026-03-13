#include <iostream>
using namespace std;

int main() {
    int numero;

    // Entrada del número amb comprovació de rang
    do {
        cout << "Introdueix un número (mínim 1 i màxim 900000): ";
        cin >> numero;
    } while (numero < 1 || numero > 900000);

    int digits = 0;
    int n = numero;

    // Comptem els dígits dividint successivament entre 10
    while (n > 0) {
        n /= 10;
        digits++;
    }

    cout << "El número " << numero << " té " << digits << " dígits." << endl;

    return 0;
}
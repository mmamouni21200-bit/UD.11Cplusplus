#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Introdueix un número: ";
    cin >> numero;

    int n = numero;
    int suma = 0;

    // Sumem els dígits
    while (n != 0) {
        suma += n % 10;  // Agafa el dígit menys significatiu
        n /= 10;          // Treu el dígit menys significatiu
    }

    cout << "La suma dels dígits de " << numero << " és: " << suma << endl;

    if (suma % 2 == 0)
        cout << "La suma és parell." << endl;
    else
        cout << "La suma és senar." << endl;

    return 0;
}
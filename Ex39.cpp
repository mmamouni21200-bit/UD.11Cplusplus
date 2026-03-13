#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "Introdueix un número: ";
    cin >> numero;

    cout << "Els dígits parells són: ";

    while (numero != 0) {
        int digit = numero % 10;  // agafem l'últim dígit
        
        if (digit % 2 == 0) {
            cout << digit << " ";
        }

        numero /= 10;  // eliminem l'últim dígit
    }

    cout << endl;

    return 0;
}
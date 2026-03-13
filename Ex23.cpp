#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Funció que converteix un número binari (string) a enter
int binari_a_enter(const string &binari) {
    int resultat = 0;
    int mida = binari.length();
    for (int i = 0; i < mida; i++) {
        if (binari[i] == '1') {
            resultat += pow(2, mida - 1 - i);
        } else if (binari[i] != '0') {
            cout << "Error: la cadena no és un binari vàlid!" << endl;
            return -1;
        }
    }
    return resultat;
}

int main() {
    string binari1 = "1010";  // Exemple: 10 decimal
    string binari2 = "1111";  // Exemple: 15 decimal
    string binari3 = "100101"; // Exemple: 37 decimal

    cout << binari1 << " en decimal és: " << binari_a_enter(binari1) << endl;
    cout << binari2 << " en decimal és: " << binari_a_enter(binari2) << endl;
    cout << binari3 << " en decimal és: " << binari_a_enter(binari3) << endl;

    // Exemple amb entrada per l'usuari
    string entrada;
    cout << "Introdueix un número binari: ";
    cin >> entrada;
    int decimal = binari_a_enter(entrada);
    if (decimal != -1)
        cout << "El valor decimal és: " << decimal << endl;

    return 0;
}
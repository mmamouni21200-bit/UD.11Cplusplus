#include <iostream>
#include <string>
using namespace std;

// Funció que crea una cadena amb el caràcter repetit n vegades
string crear_repetits(int n, char c) {
    string resultat = "";
    for (int i = 0; i < n; i++) {
        resultat += c;
    }
    return resultat;
}

int main() {
    // Proves
    cout << crear_repetits(5, 'a') << endl;  // aaaaa
    cout << crear_repetits(3, 'x') << endl;  // xxx
    cout << crear_repetits(0, 'z') << endl;  // cadena buida
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

// Funció que retorna true si la cadena és un palíndrom
bool es_palindrom(const string &cadena) {
    int inici = 0;
    int fi = cadena.length() - 1;

    while (inici < fi) {
        if (cadena[inici] != cadena[fi]) {
            return false; // Si algun caràcter no coincideix, no és palíndrom
        }
        inici++;
        fi--;
    }
    return true; // Si hem recorregut tota la cadena sense discrepància, és palíndrom
}

int main() {
    // Proves amb diferents exemples
    string exemples[] = {"radar", "ara", "civic", "rallar", "tapat", "simis", "refer", "hola", "OpenAI"};

    for (string s : exemples) {
        if (es_palindrom(s))
            cout << s << " és un palíndrom" << endl;
        else
            cout << s << " NO és un palíndrom" << endl;
    }

    return 0;
}
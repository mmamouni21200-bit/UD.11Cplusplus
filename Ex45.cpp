#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cctype> // per ispunct
using namespace std;

// Funció que llegeix un fitxer i retorna totes les paraules sense signes de puntuació
vector<string> crear_llista_fitxer(const string& nom_fitxer) {
    vector<string> llista;
    ifstream fitxer(nom_fitxer);

    if (!fitxer) { // comprova si s'ha obert correctament
        cerr << "Error: No s'ha pogut obrir el fitxer \"" << nom_fitxer << "\".\n";
        return llista; // retorna llista buida
    }

    string paraula;
    while (fitxer >> paraula) {
        // Eliminem signes de puntuació de cada paraula
        string neta;
        for (char c : paraula) {
            if (!ispunct(c)) {
                neta += c;
            }
        }
        if (!neta.empty()) {
            llista.push_back(neta);
        }
    }

    fitxer.close();
    return llista;
}

int main() {
    string nom;
    cout << "Introdueix el nom del fitxer: ";
    cin >> nom;

    vector<string> llista = crear_llista_fitxer(nom);

    if (llista.empty()) {
        cout << "No hi ha paraules per mostrar.\n";
        return 0;
    }

    cout << "Llista de paraules del fitxer:\n";
    for (const string& p : llista) {
        cout << p << endl;
    }

    return 0;
}
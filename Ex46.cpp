#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funció que retorna l'índex d'una paraula en una llista ordenada
int index_paraula(const vector<string>& llista, const string& paraula) {
    for (int i = 0; i < llista.size(); i++) {
        if (llista[i] == paraula) {
            return i; // trobat, retornem l'índex
        }
    }
    return -1; // no trobat
}

int main() {
    vector<string> llista = {"Anna", "Hola", "Ramis", "Xavi"}; // llista ordenada
    string paraula;

    cout << "Introdueix la paraula a cercar: ";
    cin >> paraula;

    int index = index_paraula(llista, paraula);

    if (index != -1)
        cout << "La paraula '" << paraula << "' es troba a la posició " << index << endl;
    else
        cout << "La paraula '" << paraula << "' no es troba a la llista." << endl;

    return 0;
}
#include <iostream>
#include <string>
#include <iomanip> // per setw
using namespace std;

int main() {
    const int NUM_PERSONES = 4;
    string noms[NUM_PERSONES];
    int any_naixement[NUM_PERSONES];
    int any_actual;

    cout << "Introdueix l'any actual: ";
    cin >> any_actual;

    // Entrada de dades per a cada persona
    for (int i = 0; i < NUM_PERSONES; i++) {
        cout << "Introdueix el nom de la persona " << (i + 1) << ": ";
        cin >> noms[i];
        cout << "Introdueix l'any de naixement de " << noms[i] << ": ";
        cin >> any_naixement[i];
    }

    // Mostrar resultats
    cout << "\nAny actual: " << any_actual << endl;
    cout << left << setw(15) << "Nom" 
         << setw(20) << "Data naixement" 
         << setw(15) << "Anys que farà aquest any" << endl;

    for (int i = 0; i < NUM_PERSONES; i++) {
        int edat = any_actual - any_naixement[i];
        cout << left << setw(15) << noms[i] 
             << setw(20) << any_naixement[i] 
             << setw(15) << edat << endl;
    }

    return 0;
}
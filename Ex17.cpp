#include <iostream>
#include <vector>
using namespace std;

// Funció que imprimeix tants punts com indiquen els valors de la llista
void crear_punts(const vector<int> &llista) {
    for (int n : llista) {       // per cada número de la llista
        for (int i = 0; i < n; i++) {
            cout << ".";         // imprimeix un punt per cada unitat
        }
        cout << endl;            // canvi de línia després de cada element
    }
}

int main() {
    vector<int> llista = {2, 3, 4};
    crear_punts(llista);

    // Prova amb una altra llista
    vector<int> llista2 = {1, 5, 2};
    cout << endl;
    crear_punts(llista2);

    return 0;
}
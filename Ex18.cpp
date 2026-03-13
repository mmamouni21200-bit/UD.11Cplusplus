#include <iostream>
#include <vector>
using namespace std;

// Funció que imprimeix tants punts com indiquen els valors de la llista
void crear_punts(const vector<int> &llista) {
    for (int n : llista) {
        for (int i = 0; i < n; i++) {
            cout << ".";
        }
        cout << endl;
    }
}

// Funció que dibuixa una piràmide centrada utilitzant crear_punts()
void dibuixar_piramide(int alçada) {
    for (int i = 1; i <= alçada; i++) {
        vector<int> fila;

        // Afegim els espais inicials per centrar els punts
        int espais = alçada - i;
        for (int j = 0; j < espais; j++) {
            cout << " ";  // espais en blanc
        }

        // Afegim els punts de la fila
        int punts = 2 * i - 1;  // nombre de punts per a cada fila
        fila.push_back(punts);

        crear_punts(fila);  // utilitzem la funció creada anteriorment
    }
}

int main() {
    cout << "Piràmide de punts:\n\n";
    dibuixar_piramide(5);  // Piràmide de 5 files
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

// Funció que retorna true si hi ha algun element en comú entre dues llistes
bool superposicio(const vector<int> &llista1, const vector<int> &llista2) {
    for (int a : llista1) {
        for (int b : llista2) {
            if (a == b) {
                return true; // S'ha trobat un element comú
            }
        }
    }
    return false; // No hi ha elements comuns
}

int main() {
    vector<int> llistaA = {1, 2, 3, 4};
    vector<int> llistaB = {5, 6, 7};
    vector<int> llistaC = {3, 8, 9};

    cout << "LlistaA i LlistaB tenen superposició? " 
         << (superposicio(llistaA, llistaB) ? "Sí" : "No") << endl;

    cout << "LlistaA i LlistaC tenen superposició? " 
         << (superposicio(llistaA, llistaC) ? "Sí" : "No") << endl;

    return 0;
}
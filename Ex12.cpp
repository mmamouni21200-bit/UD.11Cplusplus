#include <iostream>
#include <vector>
using namespace std;

// Funció que suma tots els valors d'una llista
int sumar_llista(const vector<int> &llista) {
    int suma = 0;
    for (int x : llista) {
        suma += x;
    }
    return suma;
}

// Funció que multiplica tots els valors d'una llista
int multiplicar_llista(const vector<int> &llista) {
    int producte = 1;
    for (int x : llista) {
        producte *= x;
    }
    return producte;
}

int main() {
    // Proves amb diferents exemples
    vector<int> llista1 = {1, 2, 3, 4};
    vector<int> llista2 = {5, 10, 2};
    vector<int> llista3 = {7};
    vector<int> llista4 = {}; // llista buida

    cout << "Sumar llista1: " << sumar_llista(llista1) << endl;        // 10
    cout << "Multiplicar llista1: " << multiplicar_llista(llista1) << endl; // 24

    cout << "Sumar llista2: " << sumar_llista(llista2) << endl;        // 17
    cout << "Multiplicar llista2: " << multiplicar_llista(llista2) << endl; // 100

    cout << "Sumar llista3: " << sumar_llista(llista3) << endl;        // 7
    cout << "Multiplicar llista3: " << multiplicar_llista(llista3) << endl; // 7

    cout << "Sumar llista4 (buida): " << sumar_llista(llista4) << endl;       // 0
    cout << "Multiplicar llista4 (buida): " << multiplicar_llista(llista4) << endl; // 1

    return 0;
}
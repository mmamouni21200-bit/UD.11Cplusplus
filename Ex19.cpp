#include <iostream>
#include <vector>
using namespace std;

// Funció que retorna el valor més gran d'una llista
int gran_llista(const vector<int> &llista) {
    if (llista.empty()) {
        cout << "La llista està buida!" << endl;
        return 0; // o podríem llençar una excepció
    }

    int maximo = llista[0];
    for (int n : llista) {
        if (n > maximo) {
            maximo = n;
        }
    }
    return maximo;
}

int main() {
    vector<int> llista = {3, 4, 2, 3, 10};
    cout << "El número més gran de la llista és: " << gran_llista(llista) << endl;

    vector<int> llista2 = {5, 7, 1, 9, 0};
    cout << "El número més gran de llista2 és: " << gran_llista(llista2) << endl;

    return 0;
}
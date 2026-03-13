#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Funció que comprova si hi ha duplicats
bool hi_ha_duplicats(const vector<int>& llista) {
    for (int i = 0; i < llista.size(); i++) {
        for (int j = i + 1; j < llista.size(); j++) {
            if (llista[i] == llista[j]) {
                return true;
            }
        }
    }
    return false;
}

// Funció que crea una llista de 20 números aleatoris entre 1 i 100
vector<int> llista_20_elements() {
    vector<int> llista;

    for (int i = 0; i < 20; i++) {
        int num = rand() % 100 + 1; // números entre 1 i 100
        llista.push_back(num);
    }

    return llista;
}

int main() {
    srand(time(0));

    vector<int> llista = llista_20_elements();

    cout << "Llista generada: ";
    for (int n : llista) {
        cout << n << " ";
    }
    cout << endl;

    if (hi_ha_duplicats(llista))
        cout << "Hi ha elements duplicats." << endl;
    else
        cout << "No hi ha elements duplicats." << endl;

    return 0;
}
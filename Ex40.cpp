#include <iostream>
#include <vector>
using namespace std;

// Funció que elimina el primer i l'últim element
vector<int> eliminarcapicua(const vector<int>& llista) {
    vector<int> nova;

    if (llista.size() <= 2) {
        return nova; // si té 2 o menys elements retorna una llista buida
    }

    for (int i = 1; i < llista.size() - 1; i++) {
        nova.push_back(llista[i]);
    }

    return nova;
}

int main() {
    vector<int> llista = {1, 2, 3, 4, 5};

    vector<int> resultat = eliminarcapicua(llista);

    cout << "Llista nova: ";
    for (int n : resultat) {
        cout << n << " ";
    }

    cout << endl;

    return 0;
}
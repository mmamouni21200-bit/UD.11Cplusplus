#include <iostream>
#include <vector>
using namespace std;

// Funció que elimina duplicats
vector<int> elimina_duplicats(const vector<int>& llista) {
    vector<int> nova;
    
    for (int n : llista) {
        bool trobat = false;
        // Comprovem si n ja està a la nova llista
        for (int m : nova) {
            if (m == n) {
                trobat = true;
                break;
            }
        }
        if (!trobat) {
            nova.push_back(n);
        }
    }

    return nova;
}

int main() {
    vector<int> llista = {1, 2, 3, 2, 4, 1, 5, 3};

    vector<int> resultat = elimina_duplicats(llista);

    cout << "Llista sense duplicats: ";
    for (int n : resultat) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
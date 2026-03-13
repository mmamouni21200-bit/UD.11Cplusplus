#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funció que mostra els elements de posició parell
void elements_parells(const vector<string>& llista) {
    cout << "Elements en posició parell:\n";
    for (int i = 0; i < llista.size(); i += 2) {
        cout << llista[i] << endl;
    }
}

int main() {
    vector<string> llista = {"Hola", "Món", "C++", "És", "Genial"};

    elements_parells(llista);

    return 0;
}
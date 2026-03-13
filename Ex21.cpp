#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funció que retorna les paraules amb més de x caràcters
vector<string> filtrar_paraules(const vector<string> &llista, int x) {
    vector<string> resultat;
    for (const string &paraula : llista) {
        if (paraula.length() > x) {
            resultat.push_back(paraula);
        }
    }
    return resultat;
}

int main() {
    vector<string> paraules = {"Hola", "Ramis", "IES", "Paraula", "Codi"};
    
    int x = 4;
    vector<string> filtrades = filtrar_paraules(paraules, x);

    cout << "Paraules amb més de " << x << " caràcters:\n";
    for (const string &p : filtrades) {
        cout << p << endl;
    }

    return 0;
}
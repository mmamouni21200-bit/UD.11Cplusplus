#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funció que retorna la paraula més llarga d'una llista
string paraula_mes_llarga(const vector<string> &llista) {
    if (llista.empty()) {
        return "";  // Retorna cadena buida si la llista està buida
    }

    string mes_llarga = llista[0];
    for (const string &paraula : llista) {
        if (paraula.length() > mes_llarga.length()) {
            mes_llarga = paraula;
        }
    }
    return mes_llarga;
}

int main() {
    vector<string> paraules = {"Hola", "Ramis", "IES", "Paraula"};
    cout << "La paraula més llarga és: " << paraula_mes_llarga(paraules) << endl;

    vector<string> paraules2 = {"Codi", "Programacio", "AI"};
    cout << "La paraula més llarga és: " << paraula_mes_llarga(paraules2) << endl;

    return 0;
}
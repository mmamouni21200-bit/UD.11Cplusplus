#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funció que compta els noms que comencen per una lletra donada
int nums_que_comencen_per(const vector<string> &noms, char lletra) {
    int comptador = 0;
    for (const string &nom : noms) {
        if (!nom.empty() && (tolower(nom[0]) == tolower(lletra))) {
            comptador++;
        }
    }
    return comptador;
}

int main() {
    int n;
    cout << "Quants noms vols introduir? ";
    cin >> n;

    vector<string> noms(n);
    cin.ignore(); // neteja el buffer abans de getline
    for (int i = 0; i < n; i++) {
        cout << "Introdueix el nom " << i + 1 << ": ";
        getline(cin, noms[i]);
    }

    char lletra;
    cout << "Introdueix la lletra per filtrar els noms: ";
    cin >> lletra;

    int total = nums_que_comencen_per(noms, lletra);
    cout << "Noms que comencen per '" << lletra << "': " << total << endl;

    return 0;
}
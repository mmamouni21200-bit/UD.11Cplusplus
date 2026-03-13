#include <iostream>
#include <vector>
using namespace std;

// Funció que comprova si hi ha duplicats
bool hi_ha_duplicats(const vector<int>& llista) {
    for (int i = 0; i < llista.size(); i++) {
        for (int j = i + 1; j < llista.size(); j++) {
            if (llista[i] == llista[j]) {
                return true; // hem trobat un duplicat
            }
        }
    }
    return false; // no hi ha duplicats
}

int main() {
    vector<int> llista1 = {1, 2, 3, 4, 5};
    vector<int> llista2 = {1, 2, 3, 2, 5};

    if (hi_ha_duplicats(llista1))
        cout << "La llista1 té duplicats." << endl;
    else
        cout << "La llista1 NO té duplicats." << endl;

    if (hi_ha_duplicats(llista2))
        cout << "La llista2 té duplicats." << endl;
    else
        cout << "La llista2 NO té duplicats." << endl;

    return 0;
}
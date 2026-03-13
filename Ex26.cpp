#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funció que compta els noms que comencen per 'a' (majúscula o minúscula)
int nums_que_comencen_per(const vector<string> &noms, char lletra = 'a') {
    int comptador = 0;
    for (const string &nom : noms) {
        if (!nom.empty() && (nom[0] == lletra || nom[0] == toupper(lletra))) {
            comptador++;
        }
    }
    return comptador;
}

int main() {
    vector<string> noms = {"Anna", "Alba", "Pere", "Albert", "Maria", "Adrià"};

    cout << "Noms que comencen per 'a': " 
         << nums_que_comencen_per(noms) << endl;

    return 0;
}
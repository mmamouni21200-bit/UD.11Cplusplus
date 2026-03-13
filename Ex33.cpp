#include <iostream>
#include <cmath>    // Per pow()
#include <iomanip>  // Per setprecision
using namespace std;

int main() {
    double capital_inicial, interès, capital_final;
    int anys;

    // Entrada del capital dins del rang
    do {
        cout << "Introdueix el capital (50,000€ - 800,000€): ";
        cin >> capital_inicial;
    } while (capital_inicial < 50000 || capital_inicial > 800000);

    // Entrada de l'interès dins del rang
    do {
        cout << "Introdueix l'interès anual (%) (0.5% - 13%): ";
        cin >> interès;
    } while (interès < 0.5 || interès > 13);

    // Entrada del nombre d'anys dins del rang
    do {
        cout << "Introdueix el nombre d'anys (3 - 40): ";
        cin >> anys;
    } while (anys < 3 || anys > 40);

    // Càlcul del capital final
    capital_final = capital_inicial * pow(1 + interès / 100, anys);

    // Mostrem el resultat amb dues decimals
    cout << fixed << setprecision(2);
    cout << "El capital final després de " << anys << " anys serà: " << capital_final << "€" << endl;

    return 0;
}
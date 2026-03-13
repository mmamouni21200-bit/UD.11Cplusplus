#include <iostream>
using namespace std;

int main() {
    for (int repeticio = 0; repeticio < 5; repeticio++) { // Repetim 5 vegades
        for (int i = 1; i <= 15; i++) { // Imprimeix números de l'1 al 15
            cout << i << " ";
        }
        cout << endl; // Salta de línia després de cada sèrie
    }

    return 0;
}
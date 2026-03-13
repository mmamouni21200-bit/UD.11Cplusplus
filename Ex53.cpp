#include <iostream>
using namespace std;

// Funció que comprova si un número és primer
bool es_primer(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) { // només cal provar fins a sqrt(n)
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int comptador = 0;

    cout << "Números primers entre 1 i 100:\n";

    for (int i = 1; i <= 100; i++) {
        if (es_primer(i)) {
            cout << i << " ";
            comptador++;
        }
    }

    cout << "\nTotal de números primers: " << comptador << endl;

    return 0;
}
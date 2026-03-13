#include <iostream>
#include <vector>
using namespace std;

// Funció que mostra els números superiors a un valor donat
void mostrar_majors_que(const vector<int> &numeros, int limit) {
    cout << "Nombres majors que " << limit << ": ";
    bool trobat = false;
    for (int n : numeros) {
        if (n > limit) {
            cout << n << " ";
            trobat = true;
        }
    }
    if (!trobat) {
        cout << "Cap";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Quants números vols introduir? ";
    cin >> n;

    vector<int> numeros(n);
    cout << "Introdueix els números:\n";
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    // Mostrem els números majors de 18
    mostrar_majors_que(numeros, 18);

    return 0;
}
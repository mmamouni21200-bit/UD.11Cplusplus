#include <iostream>
using namespace std;

// Funció que comprova si un any és de traspàs
bool es_de_traspas(int any) {
    // Un any és de traspàs si és divisible per 4 i (no divisible per 100 o divisible per 400)
    if ((any % 4 == 0) && ((any % 100 != 0) || (any % 400 == 0))) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int anys[] = {1900, 2000, 2024, 2023, 2100};

    for (int any : anys) {
        cout << any << ": ";
        if (es_de_traspas(any)) {
            cout << "És de traspàs" << endl;
        } else {
            cout << "No és de traspàs" << endl;
        }
    }

    // Prova amb entrada d'usuari
    int any;
    cout << "Introdueix un any per comprovar: ";
    cin >> any;
    if (es_de_traspas(any)) {
        cout << any << " és de traspàs." << endl;
    } else {
        cout << any << " no és de traspàs." << endl;
    }

    return 0;
}
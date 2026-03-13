#include <iostream>


using namespace std;

int menu() {
    int opcio;
    double a, b;

    cout << "\n=== CALCULADORA ===\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacio\n";
    cout << "4. Divisio\n";
    cout << "5. Modul (nombres enters)\n";
    cout << "6. Sortir\n";
    cout << "Tria una opcio: ";
    cin >> opcio;

    if(opcio >= 1 && opcio <= 5) {
        cout << "Introdueix el primer nombre: ";
        cin >> a;
        cout << "Introdueix el segon nombre: ";
        cin >> b;
    }

    switch(opcio) {
        case 1:
            cout << "Resultat: " << a + b << endl;
            break;

        case 2:
            cout << "Resultat: " << a - b << endl;
            break;

        case 3:
            cout << "Resultat: " << a * b << endl;
            break;

        case 4:
            if(b != 0) {
                cout << "Resultat: " << a / b << endl;
            } else {
                cout << "Error: No es pot dividir per zero!" << endl;
            }
            break;

        case 5:
            if((int)b != 0) {
                cout << "Resultat: " << (int)a % (int)b << endl;
            } else {
                cout << "Error: No es pot fer modul amb zero!" << endl;
            }
            break;

        case 6:
            cout << "Sortint del programa...\n";
            break;

        default:
            cout << "Opcio no valida!\n";
    }

    return opcio;
}

int main() {
    int op;

    do {
        op = menu();
    } while(op != 6);

    return 0;
}
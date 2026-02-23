#include <iostream>
using namespace std;

int main() {
    int opcio;
    double a, b;
    
    cout << "=== CALCULADORA ===\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacio\n";
    cout << "4. Divisio\n";
    cout << "5. Modul (nombres enters)\n";
    cout << "Tria una opcio: ";
    cin >> opcio;
    
    cout << "Introdueix el primer nombre: ";
    cin >> a;
    cout << "Introdueix el segon nombre: ";
    cin >> b;
    
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
            if(num2 != 0) {
                cout << "Resultat: " << a / b << endl;
            } else {
                cout << "Error: No es pot dividir per zero!" << endl;
            }
            break;
            
        case 5:
            // Convertim a enters per al modul
            cout << "Resultat: " << (int)a % (int)b << endl;
            break;
            
        default:
            cout << "Opcio no valida!" << endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Introdueix un número menor de 100: ";
    cin >> n;

    if (n >= 100) {
        cout << "El número ha de ser menor de 100!" << endl;
        return 1;
    }

    int suma = 0;
    cout << "Suma dels quadrats: ";
    for (int i = n; i > 0; i -= 4) {
        cout << i << "^2 ";
        suma += i * i;
        if (i - 4 > 0) cout << "+ ";
    }

    cout << "= " << suma << endl;

    return 0;
}
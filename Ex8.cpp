#include <iostream>
using namespace std;

// Funció que retorna el major de dos números
int gran(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    // Proves amb diferents exemples
    int x, y;

    // Exemple 1
    x = 5;
    y = 8;
    cout << "El major de " << x << " i " << y << " és: " << gran(x, y) << endl;

    // Exemple 2
    x = -3;
    y = -7;
    cout << "El major de " << x << " i " << y << " és: " << gran(x, y) << endl;

    // Exemple 3
    x = 10;
    y = 10;
    cout << "El major de " << x << " i " << y << " és: " << gran(x, y) << endl;

    return 0;
}
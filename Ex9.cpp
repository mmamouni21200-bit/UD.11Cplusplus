#include <iostream>
using namespace std;

// Funció que retorna el major de tres números
int gran_de_tres(int a, int b, int c) {
    int maximo = a;  // asumim que a és el major
    if (b > maximo)
        maximo = b;
    if (c > maximo)
        maximo = c;
    return maximo;
}

int main() {
    // Proves amb diferents exemples
    int x, y, z;

    // Exemple 1
    x = 5; y = 8; z = 3;
    cout << "El major de " << x << ", " << y << " i " << z << " és: " << gran_de_tres(x, y, z) << endl;

    // Exemple 2
    x = -3; y = -7; z = -1;
    cout << "El major de " << x << ", " << y << " i " << z << " és: " << gran_de_tres(x, y, z) << endl;

    // Exemple 3
    x = 10; y = 10; z = 5;
    cout << "El major de " << x << ", " << y << " i " << z << " és: " << gran_de_tres(x, y, z) << endl;

    return 0;
}
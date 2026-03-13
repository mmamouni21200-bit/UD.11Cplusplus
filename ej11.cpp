#include <iostream>
using namespace std;

// Funció que retorna true si el caràcter és una vocal
bool es_vocal(char c) {
    // Convertim a minúscula per simplificar la comprovació
    if (c >= 'A' && c <= 'Z') {
        c = c + ('a' - 'A'); // converteix majúscula a minúscula
    }

    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    // Proves amb diferents exemples
    char lletres[] = {'a', 'b', 'E', 'z', 'I', 'o', 'U', 'x'};

    for (char c : lletres) {
        if (es_vocal(c))
            cout << c << " és una vocal" << endl;
        else
            cout << c << " NO és una vocal" << endl;
    }

    return 0;
}

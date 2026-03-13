#include <iostream>
#include <string>
using namespace std;

// Funció que retorna la cadena invertida
string invertir(const string &cadena) {
    string invertida = "";
    // Recorrem la cadena des del final fins al principi
    for (int i = cadena.length() - 1; i >= 0; i--) {
        invertida += cadena[i];
    }
    return invertida;
}

int main() {
    // Proves amb diferents exemples
    string str1 = "Soc del Ramis";
    string str2 = "OpenAI";
    string str3 = "";
    string str4 = "12345";

    cout << "Original: \"" << str1 << "\" --> Invertida: \"" << invertir(str1) << "\"" << endl;
    cout << "Original: \"" << str2 << "\" --> Invertida: \"" << invertir(str2) << "\"" << endl;
    cout << "Original: \"" << str3 << "\" --> Invertida: \"" << invertir(str3) << "\"" << endl;
    cout << "Original: \"" << str4 << "\" --> Invertida: \"" << invertir(str4) << "\"" << endl;

    return 0;
}
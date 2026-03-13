#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funció que retorna la longitud d'una cadena
int longitud_cadena(const string &cadena) {
    int contador = 0;
    for (char c : cadena) {
        contador++;
    }
    return contador;
}

// Funció que retorna la longitud d'una llista (vector)
template <typename T>
int longitud_lista(const vector<T> &lista) {
    int contador = 0;
    for (T elemento : lista) {
        contador++;
    }
    return contador;
}

int main() {
    // Exemple amb cadenes
    string str1 = "Hola";
    string str2 = "";
    string str3 = "OpenAI";

    cout << "Longitud de \"" << str1 << "\": " << longitud_cadena(str1) << endl;
    cout << "Longitud de \"" << str2 << "\": " << longitud_cadena(str2) << endl;
    cout << "Longitud de \"" << str3 << "\": " << longitud_cadena(str3) << endl;

    // Exemple amb llistes
    vector<int> lista1 = {1, 2, 3, 4};
    vector<int> lista2 = {};
    vector<int> lista3 = {10, 20, 30};

    cout << "Longitud de lista1: " << longitud_lista(lista1) << endl;
    cout << "Longitud de lista2: " << longitud_lista(lista2) << endl;
    cout << "Longitud de lista3: " << longitud_lista(lista3) << endl;

    return 0;
}
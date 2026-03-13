#include <iostream>
#include <string>
using namespace std;

int main() {
    string paraula1, paraula2;
    
    cout << "Introdueix la primera paraula: ";
    cin >> paraula1;
    cout << "Introdueix la segona paraula: ";
    cin >> paraula2;

    // Convertim tot a minúscula per comparar sense distinció de majúscules/minúscules
    for (char &c : paraula1) c = tolower(c);
    for (char &c : paraula2) c = tolower(c);

    int mida1 = paraula1.size();
    int mida2 = paraula2.size();

    // Comprovem rima de 3 lletres
    if (mida1 >= 3 && mida2 >= 3 && paraula1.substr(mida1-3) == paraula2.substr(mida2-3)) {
        cout << "Les paraules rimen!" << endl;
    }
    // Comprovem rima de 2 lletres
    else if (mida1 >= 2 && mida2 >= 2 && paraula1.substr(mida1-2) == paraula2.substr(mida2-2)) {
        cout << "Les paraules rimen una mica." << endl;
    }
    else {
        cout << "Les paraules no rimen." << endl;
    }

    return 0;
}
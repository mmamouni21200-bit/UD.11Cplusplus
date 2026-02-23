#include <iostream>
#include <string>
using namespace std;

int main() {
    string nom, cognom;
    
    cout << "Introdueix el teu nom: ";
    getline(cin, nom);
    
    cout << "Introdueix el teu cognom: ";
    getline(cin, cognom);
    
    cout << "Hola, " << nom << " " << cognom << endl;
    
    return 0;
}
#include <iostream>
using namespace std;

int edat(int a){
    if(a>18){
        cout<<"Enhorabona, ets major d'edat ";
    }else if (a<18){
        cout<<"Ho sento, ets menor d'edat";
    } else { // a == 18
        cout<<"Tens exactament 18 anys";
    }
    return a; // Retornem l'edat (o pots retornar 0 si vols)
}

int main() {
    int edad;
    cout << "Quina edat tens? ";
    cin >> edad;
    edat(edad);
    return 0;
}
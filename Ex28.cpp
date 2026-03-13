#include <iostream>
#include <string>
using namespace std;

// Funció que compta les vocals en una paraula
void comptar_vocals(const string &paraula) {
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    for (char c : paraula) {
        switch (tolower(c)) {  // Convertim a minúscula per simplificar
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i++; break;
            case 'o': o++; break;
            case 'u': u++; break;
        }
    }

    cout << "Hi ha " << a << " a’s, "
         << e << " e’s, "
         << i << " i’s, "
         << o << " o’s i "
         << u << " u’s." << endl;
}

int main() {
    string paraula1 = "Ratapinyada";
    string paraula2 = "Educacio";
    string paraula3 = "Codi";

    cout << paraula1 << ": ";
    comptar_vocals(paraula1);

    cout << paraula2 << ": ";
    comptar_vocals(paraula2);

    cout << paraula3 << ": ";
    comptar_vocals(paraula3);

    return 0;
}
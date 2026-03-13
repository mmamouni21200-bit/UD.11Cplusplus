#include <iostream>
#include <string>
using namespace std;

// Funció que compta les lletres majúscules d'una cadena
int comptar_majuscules(const string &cadena) {
    int comptador = 0;
    for (char c : cadena) {
        if (c >= 'A' && c <= 'Z') {
            comptador++;
        }
    }
    return comptador;
}

int main() {
    string text1 = "HolaMundo";
    string text2 = "OpenAI GPT";
    string text3 = "codi sense majuscules";
    string text4 = "123ABCxyz";

    cout << text1 << " -> Majúscules: " << comptar_majuscules(text1) << endl;
    cout << text2 << " -> Majúscules: " << comptar_majuscules(text2) << endl;
    cout << text3 << " -> Majúscules: " << comptar_majuscules(text3) << endl;
    cout << text4 << " -> Majúscules: " << comptar_majuscules(text4) << endl;

    return 0;
}
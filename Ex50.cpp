#include <iostream>
using namespace std;

int main() {
    int files = 3; // Nombre de files màximes de l'asteriscs

    // Primera part: augmentant
    for (int i = 1; i <= files; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Segona part: disminuint
    for (int i = files - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
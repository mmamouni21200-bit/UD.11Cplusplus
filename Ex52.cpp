#include <iostream>
using namespace std;

int main() {
    int files = 5; // nombre de files

    for (int i = files; i >= 1; i--) {          // controla el nombre de files
        for (int j = i; j >= 1; j--) {          // imprimeix els números de la fila
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

string esta_ordenada(const vector<int>& llista) {
    bool ascendent = true;
    bool descendent = true;

    for (int i = 1; i < llista.size(); i++) {
        if (llista[i] < llista[i - 1]) {
            ascendent = false;
        }
        if (llista[i] > llista[i - 1]) {
            descendent = false;
        }
    }

    if (ascendent)
        return "Està ordenada de forma ascendent";
    else if (descendent)
        return "Està ordenada de forma descendent";
    else
        return "No està ordenada";
}

int main() {
    vector<int> llista1 = {3, 2, 1};
    vector<int> llista2 = {4, 5, 6};
    vector<int> llista3 = {3, 1, 4};

    cout << esta_ordenada(llista1) << endl;
    cout << esta_ordenada(llista2) << endl;
    cout << esta_ordenada(llista3) << endl;

    return 0;
}
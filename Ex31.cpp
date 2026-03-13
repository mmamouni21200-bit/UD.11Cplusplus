#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Funció que genera un codi de 4 xifres aleatori (0-9)
vector<int> generar_codi() {
    vector<int> codi(4);
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < 4; i++) {
        codi[i] = rand() % 10;
    }
    return codi;
}

// Funció que comprova l'endevinament
void avaluar_codi(const vector<int> &codi, const vector<int> &intents, int &correctes, int &coincidents) {
    correctes = 0;
    coincidents = 0;
    vector<bool> codi_usat(4, false);
    vector<bool> intent_usat(4, false);

    // Comptem els correctes (mateixa posició i valor)
    for (int i = 0; i < 4; i++) {
        if (intents[i] == codi[i]) {
            correctes++;
            codi_usat[i] = true;
            intent_usat[i] = true;
        }
    }

    // Comptem els coincidents (mateix valor, diferent posició)
    for (int i = 0; i < 4; i++) {
        if (!intent_usat[i]) {
            for (int j = 0; j < 4; j++) {
                if (!codi_usat[j] && intents[i] == codi[j]) {
                    coincidents++;
                    codi_usat[j] = true;
                    break;
                }
            }
        }
    }
}

int main() {
    cout << "Benvingut a MasterMind simplificat!\n";
    vector<int> codi_secret = generar_codi();

    int intents_totals = 0;
    vector<int> intent(4);
    while (true) {
        cout << "\nIntrodueix un codi de 4 xifres separades per espais: ";
        for (int i = 0; i < 4; i++) {
            cin >> intent[i];
        }

        intents_totals++;
        int correctes, coincidents;
        avaluar_codi(codi_secret, intent, correctes, coincidents);

        if (correctes == 4) {
            cout << "Enhorabona! Has endevinat el codi en " << intents_totals << " intents!\n";
            break;
        } else {
            cout << "Nombres correctes en la posició correcta: " << correctes << endl;
            cout << "Nombres correctes en posició incorrecta: " << coincidents << endl;
        }
    }

    cout << "El codi secret era: ";
    for (int n : codi_secret) cout << n << " ";
    cout << endl;

    return 0;
}
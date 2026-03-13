#include <iostream>
#include <string>
#include <sstream>
#include <bitset>
#include <iomanip>
#include <cmath>

using namespace std;

// Función para convertir un número decimal a otra base
string decimalToBase(int number, int base) {
    if (base == 2) { // Binario
        return bitset<32>(number).to_string().substr(32 - log2(number + 1)); // quitar ceros iniciales
    } else if (base == 8) { // Octal
        stringstream ss;
        ss << oct << number;
        return ss.str();
    } else if (base == 10) { // Decimal
        return to_string(number);
    } else if (base == 16) { // Hexadecimal
        stringstream ss;
        ss << hex << uppercase << number;
        return ss.str();
    } else {
        return "Base no soportada";
    }
}

// Función para convertir de cualquier base a decimal
int baseToDecimal(const string &numStr, int base) {
    int result;
    stringstream ss;
    if (base == 2) {
        result = stoi(numStr, nullptr, 2);
    } else if (base == 8) {
        result = stoi(numStr, nullptr, 8);
    } else if (base == 10) {
        result = stoi(numStr);
    } else if (base == 16) {
        result = stoi(numStr, nullptr, 16);
    } else {
        cout << "Base no soportada" << endl;
        result = 0;
    }
    return result;
}

int main() {
    string numStr;
    int baseFrom, baseTo;

    cout << "Introduzca el número: ";
    cin >> numStr;
    cout << "Base del número (2-bin, 8-oct, 10-dec, 16-hex): ";
    cin >> baseFrom;
    cout << "Base a convertir (2-bin, 8-oct, 10-dec, 16-hex): ";
    cin >> baseTo;

    int decimal = baseToDecimal(numStr, baseFrom);
    string converted = decimalToBase(decimal, baseTo);

    cout << "Resultado: " << converted << endl;

    return 0;
}
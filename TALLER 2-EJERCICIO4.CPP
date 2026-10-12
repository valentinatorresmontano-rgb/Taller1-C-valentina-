// ================= AÑO BISIESTO =========================

#include <iostream>
using namespace std;

int main() {
    string nombre;
    int anio;

    cout << "Escribe tu nombre: ";
    cin >> nombre;

    cout << "Hola " << nombre << ", digite un anio entero: ";
    cin >> anio;

    if (anio <= 0) {
        cout << "Error: el anio debe ser positivo." << endl;
    } else {
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
            cout << "El anio " << anio << " si es bisiesto." << endl;
        } else {
            cout << "El anio " << anio << " no es bisiesto." << endl;
        }
    }

    return 0;
}

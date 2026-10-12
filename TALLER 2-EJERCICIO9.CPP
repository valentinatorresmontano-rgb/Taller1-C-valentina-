#include <iostream>
using namespace std;

int main() {
    double saldo;
    int op;
    double m;

    cout << "Digite el saldo inicial: ";
    cin >> saldo;

    if (saldo < 0) {
        cout << "Error en el saldo." << endl;
    } else {
        cout << "1. Consultar\n2. Retirar\n3. Consignar\nElija opcion: ";
        cin >> op;

        if (op == 1) {
            cout << "Saldo: " << saldo << endl;
        } else if (op == 2) {
            cout << "Digite monto a retirar: ";
            cin >> m;
            if (m <= 0 || m > saldo) {
                cout << "Monto invalido o saldo insuficiente." << endl;
            } else {
                saldo -= m;
                cout << "Nuevo saldo: " << saldo << endl;
            }
        } else if (op == 3) {
            cout << "Digite monto a consignar: ";
            cin >> m;
            if (m <= 0) {
                cout << "El monto debe ser positivo." << endl;
            } else {
                saldo += m;
                cout << "Nuevo saldo: " << saldo << endl;
            }
        } else {
            cout << "Opcion no valida." << endl;
        }
    }

    return 0;
} 
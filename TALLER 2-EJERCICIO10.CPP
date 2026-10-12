#include <iostream>
using namespace std;

int main() {
    int d;
    int m;
    int a;
    int maxDias;

    cout << "Digite el dia: ";
    cin >> d;

    cout << "Digite el mes: ";
    cin >> m;

    cout << "Digite el ano: ";
    cin >> a;

    if (a <= 0) {
        cout << "Fecha no valida por el ano." << endl;
    } else {
        if (m < 1 || m > 12) {
            cout << "Fecha no valida por el mes." << endl;
        } else {
            if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
                maxDias = 31;
            } else {
                if (m == 4 || m == 6 || m == 9 || m == 11) {
                    maxDias = 30;
                } else {
                    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) {
                        maxDias = 29;
                    } else {
                        maxDias = 28;
                    }
                }
            }

            if (d >= 1 && d <= maxDias) {
                cout << "La fecha es valida. El mes tiene " << maxDias << " dias." << endl;
            } else {
                cout << "La fecha no es valida por el dia." << endl;
            }
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    double ing, deu, rel, cap;
    int ed, hist;

    cout << "Ingreso, deuda, edad, historial (1/0): ";
    cin >> ing >> deu >> ed >> hist;

    if (ing <= 0 || deu < 0 || ed < 18 || ed > 100 || (hist != 0 && hist != 1)) {
        cout << "Datos invalidos." << endl;
    } else {
        rel = deu / ing;
        cap = ing - deu;

        cout << "Relacion: " << rel << " | Capacidad: " << cap << endl;

        if (rel > 0.5 || cap < 0) {
            cout << "Riesgo: alto" << endl;
        } else {
            if (rel <= 0.3 && ed >= 25 && hist == 1) {
                cout << "Riesgo: bajo" << endl;
            } else {
                cout << "Riesgo: medio" << endl;
            }
        }
    }

    return 0;
}
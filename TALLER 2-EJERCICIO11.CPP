#include <iostream>
using namespace std;

int main() {
    double peso, dist, total;
    int zona;
    char fragil;

    cout << "Peso, distancia, zona (1/2), fragil (S/N): ";
    cin >> peso >> dist >> zona >> fragil;

    if (peso <= 0 || dist <= 0 || peso > 30 || (zona != 1 && zona != 2) || (fragil != 'S' && fragil != 's' && fragil != 'N' && fragil != 'n')) {
        cout << "Error en los datos." << endl;
    } else {
        total = 8000 + (1200 * peso) + (50 * dist);
        if (zona == 2) total *= 1.5;
        if (fragil == 'S' || fragil == 's') total *= 1.2;
        cout << "Total a pagar: " << total << endl;
    }

    return 0;
}

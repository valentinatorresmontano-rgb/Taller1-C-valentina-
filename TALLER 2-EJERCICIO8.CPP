#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string nombre;
    double a;
    double b;
    double c;
    double x;
    double disc;
    double x1;
    double x2;

    cout << "Escribe tu nombre: ";
    cin >> nombre;

    cout << "Hola " << nombre << ", digite el coeficiente a: ";
    cin >> a;

    cout << "Digite el coeficiente b: ";
    cin >> b;

    cout << "Digite el coeficiente c: ";
    cin >> c;

    if (a == 0) {
        if (b == 0) {
            cout << "No es una ecuacion de primer ni de segundo grado." << endl;
        } else {
            x = -c / b;
            cout << "Es una ecuacion lineal. El valor de x es: " << x << endl;
        }
    } else {
        disc = (b * b) - (4 * a * c);

        if (disc > 0) {
            x1 = (-b + sqrt(disc)) / (2 * a);
            x2 = (-b - sqrt(disc)) / (2 * a);
            cout << "El discriminante es positivo. Las dos raices reales son:" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        } else {
            if (disc == 0) {
                x1 = -b / (2 * a);
                cout << "El discriminante es cero. La unica raiz real es: " << x1 << endl;
            } else {
                cout << "El discriminante es negativo. Las raices son complejas." << endl;
            }
        }
    }

    return 0;
}

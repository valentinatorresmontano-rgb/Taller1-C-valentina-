// ================= SEGUNDOS A HORAS , MINUTOS Y SEGUNDOS =========================

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    int segundosTotales;
    int horas;
    int resto;
    int minutos;
    int segundosFinales;

    cout << "Escribe tu nombre: ";
    cin >> nombre;

    cout << "Escribe la cantidad de segundos: ";
    cin >> segundosTotales;

    if (segundosTotales < 0) {
        cout << "Hola " << nombre << ", error: los segundos no pueden ser negativos." << endl;
    } else {
        horas = segundosTotales / 3600;
        resto = segundosTotales % 3600;
        minutos = resto / 60;
        segundosFinales = resto % 60;

        cout << "Hola " << nombre << ", " << segundosTotales << " segundos equivalen a ";
        cout << horas << " hora(s), ";
        cout << minutos << " minuto(s) y ";
        cout << segundosFinales << " segundo(s)." << endl;
    }

return 0; 
}
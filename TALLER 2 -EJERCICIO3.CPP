// ================= INDICE DE MASA CORPORAL =========================

#include <iostream>
using namespace std;

int main() {
    double peso;
    double altura;
    double imc;

    cout << "Digite su peso en kg: ";
    cin >> peso;

    cout << "Digite su estatura en metros: ";
    cin >> altura;

    if (peso <= 0 || altura <= 0) {
        cout << "Error: el peso y la estatura deben ser mayores a cero." << endl;
    } else {
        imc = peso / (altura * altura);

        cout << "Su IMC es: " << imc << endl;

        if (imc < 18.5) {
            cout << "Clasificacion: Bajo peso" << endl;
        } else {
            if (imc < 25) {
                cout << "Clasificacion: Normal" << endl;
            } else {
                if (imc < 30) {
                    cout << "Clasificacion: Sobrepeso" << endl;
                } else {
                    cout << "Clasificacion: Obesidad" << endl;
                }
            }
        }
    }

    return 0;
}



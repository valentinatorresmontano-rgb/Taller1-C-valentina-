#include <iostream>
using namespace std;

int main() {
    string nombre;
    double valor;
    double total;
    double norm;
    double extra;
    double dobles;
    double bruto;
    double desc;
    double neto;

    cout << "Escribe tu nombre: ";
    cin >> nombre;

    cout << "Hola " << nombre << ", digite el valor de la hora: ";
    cin >> valor;

    cout << "Digite las horas trabajadas: ";
    cin >> total;

    if (valor <= 0) {
        cout << "Error en el valor de la hora." << endl;
    } else {
        if (total < 0) {
            cout << "Error en las horas." << endl;
        } else {
            if (total <= 40) {
                norm = total;
                extra = 0;
                dobles = 0;
            } else {
                if (total <= 48) {
                    norm = 40;
                    extra = total - 40;
                    dobles = 0;
                } else {
                    norm = 40;
                    extra = 8;
                    dobles = total - 48;
                }
            }

            bruto = (norm * valor) + (extra * valor * 1.5) + (dobles * valor * 2);

            if (bruto > 2000000) {
                desc = bruto * 0.08;
            } else {
                desc = bruto * 0.04;
            }

            neto = bruto - desc;

            cout << "Horas normales: " << norm << endl;
            cout << "Horas extra: " << extra << endl;
            cout << "Horas dobles: " << dobles << endl;
            cout << "Salario bruto: " << bruto << endl;
            cout << "Descuento: " << desc << endl;
            cout << "Salario neto: " << neto << endl;
        }
    }

    return 0;
} 
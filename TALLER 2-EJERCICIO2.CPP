// ================= PROMEDIO PONDERADO =========================

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    double nota1;
    double nota2;
    double nota3;
    double promedio;

    cout << "Escribe tu nombre: ";
    cin >> nombre;

    cout << "Escribe la primera nota (0.0 a 5.0): ";
    cin >> nota1;

    cout << "Escribe la segunda nota (0.0 a 5.0): ";
    cin >> nota2;

    cout << "Escribe la tercera nota (0.0 a 5.0): ";
    cin >> nota3;

    if (nota1 < 0.0 || nota1 > 5.0 || nota2 < 0.0 || nota2 > 5.0 || nota3 < 0.0 || nota3 > 5.0) {
        cout << "Hola " << nombre << ", error: las notas deben estar entre 0.0 y 5.0." << endl;
    } else {
        promedio = (nota1 * 30 + nota2 * 30 + nota3 * 40) / 100;

        cout << "Hola " << nombre << ", tu promedio es " << promedio << endl;

        if (promedio >= 4.5) {
            cout << "Concepto: Excelente" << endl;
        } else if (promedio >= 4.0) {
            cout << "Concepto: Bueno" << endl;
        } else if (promedio >= 3.0) {
            cout << "Concepto: Aceptable" << endl;
        } else {
            cout << "Concepto: Reprobado" << endl;
        }
    }

    return 0;
} 

// ================= TIPO DE TRIANGULO =========================

#include <iostream>
using namespace std;

int main() {
    string nombre;
    double lado1;
    double lado2;
    double lado3;
    double perimetro;

    // 1. Primero pedimos el nombre
    cout << "Escribe tu nombre (sin espacios): ";
    cin >> nombre;

    // 2. Segundo pedimos el primer lado
    cout << "Hola " << nombre << ", digite la longitud del primer lado: ";
    cin >> lado1;

    // 3. Tercero pedimos el segundo lado
    cout << "Digite la longitud del segundo lado: ";
    cin >> lado2;

    // 4. Cuarto pedimos el tercer lado
    cout << "Digite la longitud del tercer lado: ";
    cin >> lado3;

    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Lado 1: " << lado1 << endl;
    cout << "Lado 2: " << lado2 << endl;
    cout << "Lado 3: " << lado3 << endl;

    // Validaciones y clasificación
    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        cout << "Error: todos los lados deben ser mayores a cero." << endl;
    } else {
        if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
            perimetro = lado1 + lado2 + lado3;
            cout << "El perimetro es: " << perimetro << endl;

            if (lado1 == lado2 && lado2 == lado3) {
                cout << "Clasificacion: El triangulo es Equilatero." << endl;
            } else {
                if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
                    cout << "Clasificacion: El triangulo es Isosceles." << endl;
                } else {
                    cout << "Clasificacion: El triangulo es Escaleno." << endl;
                }
            }
        } else {
            cout << "Los lados ingresados no forman un triangulo valido." << endl;
        }
    }

    return 0;
}

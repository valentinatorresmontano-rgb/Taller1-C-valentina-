#include <iostream>
using namespace std;

int main() {
    string nombre;
    int num1;
    int num2;
    int num3;

    cout << "Escribe tu nombre: ";
    cin >> nombre;

    cout << "Hola " << nombre << ", digite el primer numero: ";
    cin >> num1;

    cout << "Digite el segundo numero: ";
    cin >> num2;

    cout << "Digite el tercer numero: ";
    cin >> num3;

    cout << "Numero 1: " << num1 << endl;
    cout << "Numero 2: " << num2 << endl;
    cout << "Numero 3: " << num3 << endl;

    if (num1 > num2) {
        if (num1 > num3) {
            cout << "El mayor es: " << num1 << endl;
        } else {
            cout << "El mayor es: " << num3 << endl;
        }
    } else {
        if (num2 > num3) {
            cout << "El mayor es: " << num2 << endl;
        } else {
            cout << "El mayor es: " << num3 << endl;
        }
    }

    if (num1 < num2) {
        if (num1 < num3) {
            cout << "El menor es: " << num1 << endl;
        } else {
            cout << "El menor es: " << num3 << endl;
        }
    } else {
        if (num2 < num3) {
            cout << "El menor es: " << num2 << endl;
        } else {
            cout << "El menor es: " << num3 << endl;
        }
    }

    if (num1 == num2) {
        if (num2 == num3) {
            cout << "Los tres numeros son iguales." << endl;
        } else {
            cout << "Hay dos iguales y uno distinto." << endl;
        }
    } else {
        if (num1 == num3) {
            cout << "Hay dos iguales y uno distinto." << endl;
        } else {
            if (num2 == num3) {
                cout << "Hay dos iguales y uno distinto." << endl;
            } else {
                cout << "Los tres numeros son distintos." << endl;
            }
        }
    }

    return 0;
}


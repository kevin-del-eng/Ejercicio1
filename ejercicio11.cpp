#include <iostream>
using namespace std;

int main() {
    int clave_correcta = 1234;
    int clave_ingresada = 0;
    int intentos = 0;

    while (clave_ingresada != clave_correcta) {
        cout << "Ingrese la clave de acceso: ";
        cin >> clave_ingresada;
        intentos++;

        if (clave_ingresada != clave_correcta) {
            cout << "Clave incorrecta.\n";
        }
    }

    cout << "\n¡Acceso concedido en " << intentos << " intento(s)!\n";

    return 0;
}

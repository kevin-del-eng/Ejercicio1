#include <iostream>
using namespace std;

int main() {
    float valor;
    int validos = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Ingrese medicion " << i << ": ";
        cin >> valor;

        if (valor == 999) {
            cout << "Proceso interrumpido por el usuario.\n";
            break;
        }

        if (valor < 0) {
            cout << "Valor negativo ignorado.\n";
            continue;
        }

        validos++;
    }

    cout << "\nTotal de valores validos procesados: " << validos << endl;

    return 0;
}

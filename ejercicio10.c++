#include <iostream>
using namespace std;

int main() {
    float datos[10];
    float suma = 0, media;
    int contador = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese dato " << i + 1 << ": ";
        cin >> datos[i];
        suma += datos[i];
    }

    media = suma / 10.0;

    for (int i = 0; i < 10; i++) {
        if (datos[i] > media) {
            contador++;
        }
    }

    cout << "\nMedia calculada: " << media << endl;
    cout << "Datos por encima de la media: " << contador << endl;

    return 0;
}

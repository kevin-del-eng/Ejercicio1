#include <stdio.h>

int main() {
    float medicion;
    int entero;
    float perdida;

    printf("Ingrese una medicion decimal: ");
    scanf("%f", &medicion);

    entero = (int)medicion;
    perdida = medicion - entero;

    printf("\nMedicion original: %.2f\n", medicion);
    printf("Valor entero: %d\n", entero);
    printf("Valor decimal perdido: %.2f\n", perdida);

    return 0;
}

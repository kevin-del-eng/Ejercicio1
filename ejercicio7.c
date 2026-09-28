#include <stdio.h>

int main() {
    int observaciones;
    float porcentaje;

    printf("Ingrese cantidad de observaciones validas: ");
    scanf("%d", &observaciones);
    printf("Ingrese porcentaje de datos completos (0-100): ");
    scanf("%f", &porcentaje);

    if (observaciones >= 100 && porcentaje >= 70.0) {
        printf("\nEl conjunto de datos es ACEPTADO.\n");
    } else {
        printf("\nEl conjunto de datos es RECHAZADO.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    float horas, tarifa, costo_total;

    printf("Ingrese las horas trabajadas: ");
    scanf("%f", &horas);

    printf("Ingrese el costo por hora: ");
    scanf("%f", &tarifa);

    costo_total = horas * tarifa;

    printf("\n--- RESUMEN ---\n");
    printf("Horas trabajadas: %.2f\n", horas);
    printf("Tarifa por hora: $%.2f\n", tarifa);
    printf("Costo total: $%.2f\n", costo_total);

    return 0;
}

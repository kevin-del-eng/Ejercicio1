#include <stdio.h>

int main() {
    int a, b;

    printf("Ingrese el numero de registros del primer algoritmo: ");
    scanf("%d", &a);
    printf("Ingrese el numero de registros del segundo algoritmo: ");
    scanf("%d", &b);

    printf("\n--- RESULTADOS ---\n");
    printf("Suma: %d\n", a + b);
    printf("Diferencia: %d\n", a - b);
    printf("Producto: %d\n", a * b);

    if (b != 0) {
        printf("Division entera: %d\n", a / b);
        printf("Residuo: %d\n", a % b);
    } else {
        printf("No se puede dividir entre cero.\n");
    }

    return 0;
}

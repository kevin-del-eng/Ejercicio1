#include <stdio.h>

int main() {
    int edad, es_validado;

    printf("Ingrese la edad: ");
    scanf("%d", &edad);
    printf("¿El registro esta validado? (1 = Si, 0 = No): ");
    scanf("%d", &es_validado);

    if (edad >= 18 && es_validado == 1) {
        printf("\nObservacion INCORPORADA correctamente.\n");
    } else {
        printf("\nObservacion NO incorporada.\n");
    }

    return 0;
}

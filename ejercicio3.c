#include <stdio.h>

int main() {
    int id = 101;
    int edad = 22;
    float promedio = 15.8;
    char categoria = 'B';
    int es_valido = 1;

    printf("--- DATOS DEL REGISTRO ---\n");
    printf("ID: %d\n", id);
    printf("Edad: %d anos\n", edad);
    printf("Promedio: %.2f\n", promedio);
    printf("Categoria: %c\n", categoria);

    if (es_valido == 1) {
        printf("Estado: Valido\n");
    } else {
        printf("Estado: Invalido\n");
    }

    return 0;
}

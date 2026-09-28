#include <stdio.h>

int main() {
    int id = 1001;
    int edad = 25;
    float promedio = 17.5;
    char categoria = 'A';
    int es_valido = 1;

    printf("=== FICHA DEL REGISTRO ===\n");
    printf("ID de Registro : %d\n", id);
    printf("Edad           : %d años\n", edad);
    printf("Promedio       : %.2f\n", promedio);
    printf("Categoria      : %c\n", categoria);
    
    if (es_valido == 1) {
        printf("Estado         : Valido\n");
    } else {
        printf("Estado         : Invalido\n");
    }

    return 0;
}

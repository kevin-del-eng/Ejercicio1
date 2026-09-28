#include <stdio.h>

int main() {
    int registros = 4;
    printf("Valor inicial: %d\n", registros);

    registros = registros + 3;
    printf("Despues de sumar 3: %d\n", registros);

    registros = registros * 2;
    printf("Despues de duplicar: %d\n", registros);

    return 0;
}

#include <stdio.h>

int main() {
    int total_registros, nodos;

    printf("Ingrese el total de registros: ");
    scanf("%d", &total_registros);
    printf("Ingrese el numero de nodos: ");
    scanf("%d", &nodos);

    if (nodos > 0) {
        int por_nodo = total_registros / nodos;
        int sobrantes = total_registros % nodos;

        printf("\nCada nodo procesara: %d registros\n", por_nodo);
        printf("Registros sobrantes: %d\n", sobrantes);
    } else {
        printf("El numero de nodos debe ser mayor a 0.\n");
    }

    return 0;
}

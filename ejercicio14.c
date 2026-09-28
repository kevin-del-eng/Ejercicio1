#include <stdio.h>

int main() {
    int n;
    int oper_lineal = 0;
    int oper_cuadratica = 0;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        oper_lineal++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            oper_cuadratica++;
        }
    }

    printf("\n--- COMPLEJIDAD ---\n");
    printf("Operaciones en O(n): %d\n", oper_lineal);
    printf("Operaciones en O(n^2): %d\n", oper_cuadratica);

    return 0;
}

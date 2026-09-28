#include <stdio.h>

float calcular_promedio(float a, float b, float c) {
    return (a + b + c) / 3.0;
}

int contar_mayores(float a, float b, float c, float promedio) {
    int contador = 0;
    if (a > promedio) contador++;
    if (b > promedio) contador++;
    if (c > promedio) contador++;
    return contador;
}

int main() {
    float m1, m2, m3;

    printf("Ingrese medicion 1: ");
    scanf("%f", &m1);
    printf("Ingrese medicion 2: ");
    scanf("%f", &m2);
    printf("Ingrese medicion 3: ");
    scanf("%f", &m3);

    float prom = calcular_promedio(m1, m2, m3);
    int mayores = contar_mayores(m1, m2, m3, prom);

    printf("\nPromedio: %.2f\n", prom);
    printf("Mediciones por encima del promedio: %d\n", mayores);

    return 0;
}

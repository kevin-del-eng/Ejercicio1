#include <stdio.h>

int main() {
    int edades[10];
    int suma = 0, min, max, mayores_promedio = 0;
    float media;

    for (int i = 0; i < 10; i++) {
        printf("Ingrese la edad del participante %d: ", i + 1);
        scanf("%d", &edades[i]);
        suma += edades[i];
    }

    min = edades[0];
    max = edades[0];
    media = (float)suma / 10.0;

    for (int i = 0; i < 10; i++) {
        if (edades[i] < min) min = edades[i];
        if (edades[i] > max) max = edades[i];
        if (edades[i] > media) mayores_promedio++;
    }

    printf("\n--- RESULTADOS ---\n");
    printf("Edad minima: %d\n", min);
    printf("Edad maxima: %d\n", max);
    printf("Edad media: %.2f\n", media);
    printf("Edades mayores a la media: %d\n", mayores_promedio);

    return 0;
}

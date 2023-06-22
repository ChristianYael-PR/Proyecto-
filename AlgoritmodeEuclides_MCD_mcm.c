#include <stdio.h>

int main() {
    int a, b;
    printf("Ingrese el primer número: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);

    int dividendo, divisor, cociente, residuo;

    printf("\nCálculo del Máximo Común Divisor (MCD):\n");
    printf("----------------------------------------\n");

    // Algoritmo de Euclides para calcular el MCD (a = b (q) + r . . .)
    dividendo = a;
    divisor = b;

    while (divisor != 0) {
        cociente = dividendo / divisor;
        residuo = dividendo % divisor;

        printf("%d = %d (%d) + %d\n", dividendo, divisor, cociente, residuo);

        dividendo = divisor;
        divisor = residuo;
    }

    int MCD = dividendo; // El último divisor es el MCD

    printf("\nEl Máximo Común Divisor (MCD) de %d y %d es: %d\n", a, b, MCD);

    printf("\nCálculo del Mínimo Común Múltiplo (mcm):\n");
    printf("---------------------------------------\n");

    int mcm = (a * b) / MCD; // Cálculo del mcm utilizando la fórmula mencionada

    printf("[%d , %d] = (%d * %d) / %d\n", a, b, a, b, MCD);
    printf("El Mínimo Común Múltiplo (mcm) de %d y %d es: %d\n", a, b, mcm);

    return 0;
}


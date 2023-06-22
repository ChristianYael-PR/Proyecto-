#include <stdio.h>

int main() {
    int a, b;
    printf("Ingrese el primer n�mero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo n�mero: ");
    scanf("%d", &b);

    int dividendo, divisor, cociente, residuo;

    printf("\nC�lculo del M�ximo Com�n Divisor (MCD):\n");
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

    int MCD = dividendo; // El �ltimo divisor es el MCD

    printf("\nEl M�ximo Com�n Divisor (MCD) de %d y %d es: %d\n", a, b, MCD);

    printf("\nC�lculo del M�nimo Com�n M�ltiplo (mcm):\n");
    printf("---------------------------------------\n");

    int mcm = (a * b) / MCD; // C�lculo del mcm utilizando la f�rmula mencionada

    printf("[%d , %d] = (%d * %d) / %d\n", a, b, a, b, MCD);
    printf("El M�nimo Com�n M�ltiplo (mcm) de %d y %d es: %d\n", a, b, mcm);

    return 0;
}


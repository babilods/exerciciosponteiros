#include <stdio.h>

void calcularSoma(int *a, int b) {
    *a = *a + b;
}

int main() {
    int valorA, valorB;

    printf("Digite o valor inteiro A: ");
    scanf("%d", &valorA);

    printf("Digite o valor inteiro B: ");
    scanf("%d", &valorB);

    calcularSoma(&valorA, valorB);

    printf("\nValores depois do processamento:\n");
    printf("Novo valor de A: %d\n", valorA);
    printf("Valor de B: %d\n", valorB);

    return 0;
}

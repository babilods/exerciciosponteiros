#include <stdio.h>

int somaDobro(int *a, int *b) {
    
    *a = 2 * (*a);
    *b = 2 * (*b);


    return (*a + *b);
}

int main() {
    
    int valorA, valorB;

    printf("Digite o valor inteiro A: ");
    scanf("%d", &valorA);

    printf("Digite o valor inteiro B: ");
    scanf("%d", &valorB);

    int resultado = somaDobro(&valorA, &valorB);

    printf("\nValores depois do processamento:\n");
    printf("Novo valor de A: %d\n", valorA);
    printf("Novo valor de B: %d\n", valorB);
    printf("Soma do dobro de A e B: %d\n", resultado);

    return 0;
}

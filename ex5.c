#include <stdio.h>
void encontrarMaiorMenor(int *a, int *b) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    encontrarMaiorMenor(&valor1, &valor2);

    printf("\nValores ordenados:\n");
    printf("Maior valor: %d\n", valor1);
    printf("Menor valor: %d\n", valor2);

    return 0;
}

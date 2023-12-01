#include <stdio.h>

// Função para trocar o conteúdo de duas variáveis inteiras
void trocarValores(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    
    int valor1, valor2;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("\nValores antes da troca:\n");
    printf("Valor 1: %d\n", valor1);
    printf("Valor 2: %d\n", valor2);

    trocarValores(&valor1, &valor2);

    printf("\nValores após a troca:\n");
    printf("Valor 1: %d\n", valor1);
    printf("Valor 2: %d\n", valor2);

    return 0;
}

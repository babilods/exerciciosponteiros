#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 5.60;
    char caractere = 'A';

    int *ponteiroInteiro;
    float *ponteiroReal;
    char *ponteiroChar;

    ponteiroInteiro = &inteiro;
    ponteiroReal = &real;
    ponteiroChar = &caractere;

    printf("Valores antes da modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    *ponteiroInteiro = 20;
    *ponteiroReal = 1.30;
    *ponteiroChar = 'B';

    printf("\nValores após a modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
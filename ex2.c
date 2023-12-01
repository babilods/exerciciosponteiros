#include <stdio.h>

int main() {
    int numero1 = 10;
    int numero2 = 20;
    if (&numero1 > &numero2) {
        printf("O endereco de numero1 (%p) eh maior.\n", (void*)&numero1);
    } else if (&numero1 < &numero2) {
        printf("O endereco de numero2 (%p) eh maior.\n", (void*)&numero2);
    } else {
        printf("Os enderecos sao iguais.\n");
    }

    return 0;
}

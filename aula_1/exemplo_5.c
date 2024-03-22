// Soma de dígitos
#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }

    printf("A soma dos dígitos é %d\n", soma);

    return 0;
}
// Fatorial
#include <stdio.h>

int main() {
    int n, i;
    long long fatorial = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %lld\n", n, fatorial);

    return 0;
}
// Média de uma sequência de números
#include <stdio.h>
#include <stdlib.h>

float media(float v[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += v[i];
    }
    return soma / n;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    float *v = (float *) malloc(n * sizeof(float));
    for (int i = 0; i < n; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &v[i]);
    }
    printf("A média dos números é: %.2f\n", media(v, n));
    free(v);
    return 0;
}
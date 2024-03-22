// Adivinhação
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int numero, palpite, tentativas = 0;

    srand(time(NULL));
    numero = rand() % 100 + 1;

    printf("Adivinhe o número (1 a 100)\n");

    do {
        printf("Digite o seu palpite: ");
        scanf("%d", &palpite);

        tentativas++;

        if (palpite < numero) {
            printf("Muito baixo\n");
        } else if (palpite > numero) {
            printf("Muito alto\n");
        }
    } while (palpite != numero);

    printf("Parabéns! Você acertou em %d tentativas\n", tentativas);

    return 0;
}
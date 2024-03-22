// Rodízio de veículos
#include <stdio.h>

int main() {
    int placa;

    printf("Descubra o dia da semana em que você não pode circular com o seu veículo\n");
    printf("Digite o último dígito da placa do seu veículo: ");
    scanf("%d", &placa);

    switch (placa) {
        case 1:
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
        case 4:
            printf("Terça-feira\n");
            break;
        case 5:
        case 6:
            printf("Quarta-feira\n");
            break;
        case 7:
        case 8:
            printf("Quinta-feira\n");
            break;
        default:
            printf("Sexta-feira\n");
    }

    return 0;
}
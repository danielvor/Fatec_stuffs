// Índice de massa corporal
#include <stdio.h>
#include <math.h>

int main() {
    float peso, altura, imc;

    printf("Digite o seu peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a sua altura (m): ");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);

    printf("O seu IMC é %.2f\n", imc);

    return 0;
}
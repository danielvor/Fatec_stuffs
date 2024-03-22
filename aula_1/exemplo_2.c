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

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Peso normal\n");
    } else if (imc < 30) {
        printf("Sobrepeso\n");
    } else if (imc < 35) {
        printf("Obesidade grau 1\n");
    } else if (imc < 40) {
        printf("Obesidade grau 2\n");
    } else {
        printf("Obesidade grau 3\n");
    }

    return 0;
}
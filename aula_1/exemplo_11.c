// Funcionamento
#include <stdio.h>

int main(void){
    int v = 5; // variavel simples
    int *p; // variavel ponteiro
    p = &v; // p recebe o endereco de v
    *p = *p + 2; // v recebe o valor de v + 2
    printf("v=%d, *p=%d\n", v, *p); // imprime o valor de v e o valor apontado por p
    return 0;
}
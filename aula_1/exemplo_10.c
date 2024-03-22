// Ponto!
#include <stdio.h>

typedef struct {float x, y;} Ponto;

int main(void){
    Ponto p1 = {1.5, 2.5};
    Ponto p2 = {3, 4};
    printf("p1 = (%.2f, %.2f)\n", p1.x, p1.y);
    printf("p2 = (%.2f, %.2f)\n", p2.x, p2.y);
    return 0;
}
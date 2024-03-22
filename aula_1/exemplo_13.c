// Passagem por referencia

void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// troca(&a, &b);
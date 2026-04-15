#include <stdio.h>


void incrementar(int *n) {
    (*n)++; 
}

int main() {
    int contador = 0;

    printf("Valor inicial: %d\n", contador);

    incrementar(&contador);
    
    printf("Apos 1 incremento: %d\n", contador);
    
    return 0;
}
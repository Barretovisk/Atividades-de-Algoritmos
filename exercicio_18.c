#include <stdio.h>

void porValor(int n) {
    n = n + 10;
    printf("   [Funcao Valor] Alterei a copia para: %d\n", n);
}

void porReferencia(int *n) {
    *n = *n + 10;
    printf("   [Funcao Referencia] Alterei o original para: %d\n", *n);
}

int main() {
    int numero = 100;

    printf("VALOR INICIAL: %d\n", numero);

    porValor(numero); 
    
    printf("Resultado na Main: %d, Nao mudou\n\n", numero);

    printf("Chamando porReferencia\n");
    porReferencia(&numero); 
    
    printf("Resultado na Main: %d (Mudou de verdade!)\n", numero);

    return 0;
}
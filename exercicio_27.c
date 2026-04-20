#include <stdio.h>

int main(){

    int vetor[3] = {10, 20, 30};
    int *p;
    
    p = vetor;
    
    printf("Valores do vetor: %d, %d, %d\n", vetor[0], vetor[1], vetor[2]);
    
    *p = 100;
    *(p + 1) = 200;
    *(p + 2) = 300;
    
    printf("Valores alterados: %d, %d, %d\n", vetor[0], vetor[1], vetor[2]);
    
    
    return 0;
}

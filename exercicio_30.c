#include <stdio.h>

int main() {

    int vetor[5] = {2, 4, 6, 8, 10};
    int *p = vetor; 
    int i;

    printf("Vetor ANTES da modificacao:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    for(i = 0; i < 5; i++) {
        *(p + i) = *(p + i) * 3; 
    }

    printf("Vetor DEPOIS da modificacao (valores triplicados):\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
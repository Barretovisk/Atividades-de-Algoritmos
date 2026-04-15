#include <stdio.h>

long potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    }
    return base * potencia(base, expoente - 1);
}

int main() {
    int b, e;
    
    printf("Digite a base: ");
    scanf("%d", &b);
    printf("Digite o expoente (positivo): ");
    scanf("%d", &e);
    
    if (e < 0) {
        printf("erro\n");
    } else {
        printf("%d elevado a %d e: %ld\n", b, e, potencia(b, e));
    }
    
    return 0;
}
#include <stdio.h>

long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * fatorial(n - 1);
}

int main() {
    int num;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Erro: Nao existe fatorial de numero negativo.\n");
    } else {
        printf("O fatorial de %d e: %lld\n", num, fatorial(num));
    }
    
    return 0;
}
#include <stdio.h>

int contar(int n) {

    if (n == 0) {
        return 1; 
    }
 
    return 1 + contar(n - 1);
}

int main() {
    int num;

    scanf("%d", &num);
    
    if (num < 0) {
        printf("digite um numero positivo\n");
    } else {
        int total = contar(num);
        printf("Existem %d numeros entre %d e 0 (inclusive).\n", total, num);
    }
    
    return 0;
}
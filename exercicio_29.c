#include <stdio.h>

int soma_itera(int n) {
    int acumulador = 0;
    for (int i = 1; i <= n; i++) {
        acumulador += i;
    }
    return acumulador;
}

int soma_recur(int n) {
    if (n == 0) {
        return 0;
    }
    return n + soma_recur(n - 1);
}

int main() {
    int num;
    
    scanf("%d", &num);

    printf("Soma (Iterativa): %d\n", soma_itera(num));
    printf("Soma (Recursiva): %d\n", soma_recur(num));

    return 0;
}
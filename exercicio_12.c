#include <stdio.h>

void tentarAlterar(int n) {
    printf("Dentro da funcao, Valor recebido: %d\n", n);
    
    n = n + 100;
    
    printf("Dentro da funcao, Valor apos tentativa de alteracao: %d\n", n);
}

int main() {
    int num = 10;

    printf("Antes de chamar a funcao, o numero vale: %d\n", num);

    tentarAlterar(num);

    printf("Depois de chamar a funcao, o numero dentro da main vale: %d\n", num);

    return 0;
}
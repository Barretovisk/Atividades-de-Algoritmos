#include <stdio.h>

int main() {
    int numero = 10;

    printf("Fora do if: numero vale %d\n", numero);

    if (numero > 5) {
     
        int escopoLocal = 500; 
        
        printf("Dentro do if: numero vale %d\n", numero);
        printf("Dentro do if: escopoLocal vale %d\n", escopoLocal);
        
        numero = numero + 10; 
    }

    printf("Fora do if: numero agora vale %d\n", numero);

    return 0;
}
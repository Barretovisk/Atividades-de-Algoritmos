#include <stdio.h>

int main(){

    int numero = 50;
    int *p;
    
    printf("O valor inicial da variavel é: %d\n", numero);
    
    p = &numero;
    
    *p = 100;
    
    printf("O valor da variavel apos a alterção: %d\n", numero);
    printf("O valor do ponteiro apos essa mudança: %d\n", p);


    return 0;
}

#include <stdio.h>

    void trocar(int *p1, int *p2){
        int aux;
        
        aux = *p1;
        
        *p1 = *p2;
        
        *p2 = aux;
    }

int main() {
   
   int a, b;
   
   printf("Escreva dois numeros: \n");
   scanf("%d %d", &a, &b);
   
   printf("Valor de a antes da troca: %d\n", a);
    printf("Valor de b antes da troca: %d\n", b);
    
    trocar(&a,&b);
    
     printf("Valor de a depois da troca: %d\n", a);
    printf("Valor de b depois da troca: %d\n", b);
    
    return 0;
}
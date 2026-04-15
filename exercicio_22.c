#include <stdio.h>

    int soma(int n){
        int acumular = 0;
        for(int i = 1; i<=n; i++){
            acumular += i;
        }
        return acumular;
    }
    

int main() {
 
    int a, s = 0;
    
    scanf("%d", &a);
    
   s = soma(a);
    
    printf("soma de 1 até %d é igual a: %d\n", a, s);
 
    return 0;
}
#include <stdio.h>

    int dobro(int n){
        return n * n;
    }
 
int main(){
 
    int a, b = 0;
    
    scanf("%d", &a);
    
    
    b = dobro(a);
    
    printf("O dobro de %d é igual a: %d\n", a, b);

    return 0;
}

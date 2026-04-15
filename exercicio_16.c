#include <stdio.h>
    
    int triplo(int n){
        return  n * 3;
    }
    
int main() {
    
    int a, t = 0;
    
    printf("Escreva um numero: \n");
    scanf("%d", &a);
    
    t = triplo(a);
    
    printf("O triplo desse valor é: %d\n", t);
    return 0;
}
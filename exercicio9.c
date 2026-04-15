#include <stdio.h>

    int soma(int n1, int n2){
        return n1 + n2;
    }
    
    void mostre(int resultado){
        printf("%d\n", resultado);
    }

int main(){

    int a, b, s = 0;
    
    scanf("%d %d", &a, &b);
    
    s = soma(a,b);
    
    mostre(s);

    return 0;
}

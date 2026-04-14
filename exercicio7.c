#include <stdio.h>

    int par_imp(int n){
        if(n % 2 == 0){
            return 1;
        } else{
            return 0;
        }
    }
 
int main(){
 
    int num;
    
    scanf("%d", &num);
    
    if(par_imp(num)){
        printf("Verdadeiro\n");
    } else {
        printf("Falso\n");
    }

    return 0;
}

#include <stdio.h>

    int num = 10;
    
    void mostrar(){
        printf("Valor global: %d\n", num);
    }
    

int main(){

   int num = 20;
   
    printf("Valor local: %d\n", num);
    
    mostrar();

    return 0;
}

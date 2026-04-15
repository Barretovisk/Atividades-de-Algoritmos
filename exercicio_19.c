#include <stdio.h>


    int x = 0;
    
    void funcao(){
        x++;
    }
    


int main() {
    
    
    
    printf("valor da global: %d\n", x);
    
    funcao();
    
    printf("valor da global: %d\n", x);
    
    funcao();
    
    printf("valor da global: %d\n", x);
    
    
    return 0;
}
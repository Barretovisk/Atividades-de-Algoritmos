#include <stdio.h>

    void dobrar(int *p){
       *p = (*p) * 2;
    }

int main(){

    int n = 25;
    
    printf("Valor antes de dobrar: %d\n", n);
    
    dobrar(&n);
    
    printf("Dobro do valor apontado: %d\n", n);


    return 0;
}

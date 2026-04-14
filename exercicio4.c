#include <stdio.h>

    void ola(char nome[]){
        printf("Olá, %s.\n", nome);
    }
 
int main(){
 
    char usuario[50];
    
    printf("Escreva seu primeiro nome: \n");
    scanf("%s", &usuario);
    
    ola(usuario);
    
    return 0;
}

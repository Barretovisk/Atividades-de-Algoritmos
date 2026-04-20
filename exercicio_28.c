#include <stdio.h>

int main(){

    char nome[50];
    
    printf("Escreva uma palavra: \n");
    scanf("%s", &nome);
    printf("\n");
    
    printf("Sua palavra antes de ser alterada pelo programa: %s\n", nome);
    printf("\n");
    
    nome[0] = 'Z';
    
    printf("Nome alterado: %s\n", nome);
    
    return 0;
}

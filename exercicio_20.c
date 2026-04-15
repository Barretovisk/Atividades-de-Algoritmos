#include <stdio.h>

// ANALISE:
//   Ambas as funções abaixo recebem um PONTEIRO (*). 
//   Isso significa que elas não trabalham com cópias, mas sim com o 
//   endereço real da variável criada na main.


// Função 2: Dobra o valor que estiver no endereço de memória
void dobrar(int *n) {
    *n = (*n) * 2; 
    // O '*' acessa o valor original e o sobrescreve.
}

// Função 2: Soma 5 ao valor que estiver no mesmo endereço de memória
void somarCinco(int *n) {
    *n = (*n) + 5;
    // Ela não sabe quem alterou o valor antes, 
    // ela apenas pega o que está lá no momento e soma 5.
}

int main() {
    // A variável 'numero' nasce com o valor 10 no endereço
    int numero = 10;

    printf("Valor Inicial: %d\n", numero);

    // PASSO 1: Chamada por referência para dobrar.
    // Enviamos o endereço (&numero). A função vai ao endereço
    //  vê o 10, e o transforma em 20.
    
    dobrar(&numero);
    printf("Apos dobrar: %d\n", numero);

      //PASSO 2: Chamada por referência para somarCinco.
     //  Enviamos o MESMO endereço (&numero). A função vai ao endereço
    //   vê o 20 (deixado pela função anterior) e o transforma em 25.
    
    somarCinco(&numero);
    printf("Apos somar cinco: %d\n", numero);

    
      // CONCLUSAO: 
      // O valor final (25) é o resultado da ACUMULAÇÃO das modificações.
      // Se alterarmos a ordem das chamadas (somar antes de dobrar), 
      // o resultado seria diferente (10+5=15 -> 15*2=30), o que prova
      // que elas compartilham o mesmo estado de memória.
    
    
    return 0;
}
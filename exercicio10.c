#include <stdio.h>

float calcularSoma(float numeros[], int total) {
    float soma = 0;
    for(int i = 0; i < total; i++) {
        soma += numeros[i];
    }
    return soma;
}

float calcularMedia(float numeros[], int total) {
    if (total == 0) return 0;
    return calcularSoma(numeros, total) / total;
}

float calcularMaior(float numeros[], int total) {
    float maior = numeros[0]; 
    for(int i = 1; i < total; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    return maior;
}

int main() {
    int n;
    printf("Quantos numeros voce deseja inserir? ");
    scanf("%d", &n);

    float valores[n];

    for(int i = 0; i < n; i++) {
        printf("Digite o numero: %d\n", i + 1);
        scanf("%f", &valores[i]);
    }

    printf("Soma Total: %.2f\n", calcularSoma(valores, n));
    printf("Media: %.2f\n", calcularMedia(valores, n));
    printf("Maior Valor: %.2f\n", calcularMaior(valores, n));

    return 0;
}
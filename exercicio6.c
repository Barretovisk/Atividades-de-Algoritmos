#include <stdio.h>

    void nota(double media){
        if(media >= 6.0){
            printf("Você foi aprovado, sua média foi: %.2lf\n", media);
        } else{
        printf("Você foi reprovado, sua média foi: %.2lf\n", media);
        }
    }
 
int main(){
 
    double m;
    
    scanf("%lf", &m);
    
    nota(m);

    return 0;
}

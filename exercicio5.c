#include <stdio.h>

    double media(float n1, float n2, float n3){
        return (n1 + n2 + n3) / 3;
    }
        
 
int main(){
 
    float a, b, c;
    double m = 0;
    
    scanf("%f %f %f", &a, &b, &c);
    
    m = media(a,b,c);
    
    printf("A media entre os valores é: %.2lf\n", m);
    
    
    return 0;
}

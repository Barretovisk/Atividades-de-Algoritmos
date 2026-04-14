#include <stdio.h>

 int soma(int n1, int n2){
      return n1 + n2;
 }

int main(){
  
    int a, b, s = 0;
    
    scanf("%d %d", &a, &b);
    
   s = soma(a,b);
    
    printf("%d", s);
    
    return 0;
}

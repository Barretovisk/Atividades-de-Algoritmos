#include <stdio.h>



 int dobro(int n1){

      return n1 * 2;

 }



int main(){

  

    int a, b = 0;

    

    scanf("%d", &a);

    

    b = dobro(a);

    

    printf("%d", b);

    

    return 0;

}
#include <stdio.h>

int main(){

 printf("Escola Senai, Euclides Facchini\n");
 printf("Mariana Morais dos Santos\n");

 int numero;
    
     printf("Informe seu número:\n");
     scanf("%d", &numero);

    for( int i = 1; i <= 10; i++){
    printf("%d x %d = %d \n", numero, i, numero * i);
 }
}
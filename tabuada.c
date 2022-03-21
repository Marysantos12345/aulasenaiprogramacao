#include <stdio.h>

int main(){
      printf("Escola Senai, Euclides Facchini\n");
      printf("Mariana Morais dos Santos\n");

     int multiplicador = 3;
    
     printf("tabuada 3: \n");
     
    for( int i = 1; i <= 10; i++){
         int resultado = multiplicador * i;
         printf("%d X %d = %d\n", multiplicador, i, resultado);
 }

}
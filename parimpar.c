#include <stdio.h>

int main(){
   printf("Escola Senai, Euclides Facchini\n");
   printf("Mariana Morais dos Santos\n");

   int numero;

   printf("Digite um número inteiro: ");
   scanf("%d", &numero);

   if(numero %2 == 0){
       printf("O número é par \n");
   }
    else{
        printf("O número é impar \n");
    }

}
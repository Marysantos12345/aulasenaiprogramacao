#include <stdio.h>

int main(){
   printf("Escola Senai, Euclides Facchini\n");
   printf("Mariana Morais dos Santos\n");

   int numero;

   printf("Digite um n�mero inteiro: ");
   scanf("%d", &numero);

   if(numero %2 == 0){
       printf("O n�mero � par \n");
   }
    else{
        printf("O n�mero � impar \n");
    }

}
#include<stdio.h>

int main(){
    printf("Escola Senai, Euclides Facchini\n");
    printf("Mariana Morais dos Santos\n");

    int numero;
    int numero2;

   printf("Digite um número inteiro: ");
   scanf("%d", &numero);
   printf("Digite outro número inteiro: ");
   scanf("%d", &numero2);

   if(numero > numero2){
       if(numero %2 == 0){
       printf("O primeiro número é maior que o segundo e par");
       }
       else{
           printf("O primeiro número é maior que o segundo e impar");
       }
   }
   else{
        if(numero2 %2 == 0){
            printf("O segundo número é maior que o primeiro e par");
       }
       else{
           printf("O segundo número é maior que o primeiro e impar");
       }
   }
}
